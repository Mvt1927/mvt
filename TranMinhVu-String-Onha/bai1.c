#include <stdio.h>
#include <string.h>
#include<windows.h>
#include<conio.h>
void menu(void);
void nhapChuoi(char str[]);
void kiemTrakyso(char str[]);
void kiemTraInHoa(char str[]);
void timKytu(char str[]);
void timChuoi(char str[]);
int main()
{
    
    char str[50];
    int chon;
    
    while (1)
    {
        system("cls");
        menu();
        if (strlen(str)!=0)
        {
            printf("\nChuoi da nhap : %s",str);
        }
        printf("\nMoi Ban chon mot muc: ");
        
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            nhapChuoi(str);
            break;
        case 2:
            kiemTrakyso(str);
            
            break;
        case 3:
            kiemTraInHoa(str);
            
            break;
        case 4:
            timKytu(str);
            
            break;
        case 5:
            timChuoi(str);
            
            break;
        case 0:
            printf("Thank you !!! see you again");
            
            return 0;
        }
    }
    return 0;
}
void menu(void)
{
    printf("\n1. Nhap 1 chuoi co kich thuoc 0-50");
    printf("\n2. Kiem tra ky tu so");
    printf("\n3. Kiem tra ky tu in hoa");
    printf("\n4. Kiem tra co chua ky tu nhap tu ban phim");
    printf("\n5. Kiem tra chuoi trong chuoi");
    printf("\n0. Thoat");
}
void nhapChuoi(char str[])
{
    fflush(stdin);
    do
    {
        printf("\nNhap chuoi (0-50): ");
        gets(str);
    } while (!(strlen(str) > 0 && strlen(str) < 50));
}
void kiemTrakyso(char str[])
{
    int i;
    int timThay = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            timThay = 1;
            printf("\nChuoi co chua ky tu so");
            getch();
            break;
        }
    }
    if (timThay == 0)
    {
        printf("\nChuoi khong chua chu so");
        getch();
    }
}
void kiemTraInHoa(char str[])
{
    int timThay = 0;
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            timThay = 1;
            printf("\nChuoi co chua chu in hoa");
            getch();
            break;
        }
    }
    if (timThay == 0)
    {
        printf("\nChuoi khong chua chu in hoa");
        getch();
    }
}
void timKytu(char str[])
{
    int timThay = 0;
    int i;
    char ch;
    fflush(stdin);
    printf("Nhap 1 ky tu bat ky:");
    ch = getchar();
    for (i = 0; i < strlen(str); i++)
    {
        if (strchr(str, ch) != NULL)
        {
            timThay = 1;
            printf("\nChuoi \"%s\" co chua ky tu '%c'", str, ch);
            getch();
            break;
        }
    }
    if (timThay == 0)
    {
        printf("\nChuoi \"%s\" khong chua ky tu '%c'", str, ch);
        getch();
    }
}
void timChuoi(char str[])
{
    int timThay = 0;
    char b[50];
    fflush(stdin);
    do
    {
        printf("\nNhap chuoi (0-50):");
        gets(b);
    } while (!(strlen(b) > 0 && strlen(b) < 50));
    if (strstr(str, b) != NULL)
    {
        printf("\nChuoi \"%s\" co chua chuoi \"%s\"", str, b);
        getch();
    }
    else
    {
        printf("\nChuoi \"%s\" khong chua chuoi \"%s\"", str, b);
        getch();
    }
    if (strlen(b) > strlen(str))
    {
        printf("\nChuoi \"%s\" co do dai lon hon chuoi \"%s\"", b, str);
        getch();
    }
    else
    {
        printf("\nChuoi \"%s\" co do dai nho hon chuoi \"%s\"", b, str);
        getch();
    }
    if (strcmpi(b, str) > 0)
    {
        printf("\nChuoi \"%s\" lon hon chuoi \"%s\"", b, str);
        getch();
    }
    else
    {
        printf("\nChuoi \"%s\" khong lon hon chuoi \"%s\"", b, str);
        getch();
    }
}
