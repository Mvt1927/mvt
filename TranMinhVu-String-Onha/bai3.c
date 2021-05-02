#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
void menu(void);
void nhap(char str[50][50], int *n);
void Xuat(char str[50][50], int n);
void MinMax(char str[50][50], int n);
void tblen(char str[50][50], int n);
void inDK(char str[50][50], int n);
void XXTangGiam(char str[50][50], int n);
void InXauDoiXung(char a[],int *check);
void Doixung(char str[50][50], int n);
void InkyTuso(char a[],int *check);
void Kytuso(char str[50][50], int n);
void timKytu(char a[], char c,int *check);
void Kytu(char str[50][50], int n);
void NoiChuoi(char str[50][50], int n);
int main(int argc, char const *argv[])
{

    char str[50][50];
    int chon;
    int n = 0;

    while (1)
    {
        system("cls");
        menu();
        printf("\nChuoi da nhap :\n");
        Xuat(str, n);
        printf("\n-----------------------");
        printf("\nMoi Ban chon mot muc: ");

        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            nhap(str, &n);
            break;
        case 2:
            MinMax(str, n);

            break;
        case 3:
            tblen(str, n);

            break;
        case 4:
            inDK(str, n);

            break;
        case 5:
            XXTangGiam(str, n);

            break;
        case 6:
            Doixung(str, n);

            break;
        case 7:
            Kytuso(str, n);

            break;
        case 8:
            Kytu(str, n);

            break;
        case 9:
            NoiChuoi(str, n);

            break;
        case 0:
            printf("Thank you !!! see you again");
            return 0;
        default:
            break;
        }
    }
    return 0;
}
void menu(void)
{
    printf("\n1. Nhap 1 mang gom n chuoi co kich thuoc 0-50");
    printf("\n2. Tim min max kich thuoc cua mang");
    printf("\n3. Trung binh chieu dai mang");
    printf("\n4. In cac chuoi co chieu dai lon hon trung binh");
    printf("\n5. Xap xep cac chuoi theo kich thuoc");
    printf("\n6. In cac chuoi doi xung");
    printf("\n7. In cac chuoi co ky tu so");
    printf("\n8. Nhap c In cac chuoi co ky tu c ");
    printf("\n9. In cac chuoi co ky tu so");
    printf("\n0. Thoat");
}
void nhap(char str[50][50], int *n)
{
    int i;
    printf("Nhap n: ");
    scanf("%d", n);

    fflush(stdin);
    for (i = 0; i < *n; i++)
    {
        fflush(stdin);
        printf("nhap chuoi a[%d] : ", i);
        gets(str[i]);
    }
}
void Xuat(char str[50][50], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("+  ");
        puts(str[i]);
    }
}
void MinMax(char str[50][50], int n)
{
    char min[50], max[50];
    int i;
    strcpy(max, str[0]);
    strcpy(min, str[0]);
    for (i = 1; i < n; i++)
    {
        if (strlen(str[i]) > strlen(max))
        {
            strcpy(max, str[i]);
        }
        if (strlen(str[i]) < strlen(min))
        {
            strcpy(min, str[i]);
        }
    }
    printf("\nChuoi co kt lon nhat la: '%s' ", max);
    printf("\nChuoi co kt nho nhat la: '%s' ", min);
    getch();
}
void tblen(char str[50][50], int n)
{
    int i, S = 0;
    for (i = 0; i < n; i++)
    {
        S = S + strlen(str[i]);
    }
    float TB = (float)(S / n);
    printf("\nTrung binh chiue dai cac chuoi la: %0.3f", TB);
    getch();
}
void inDK(char str[50][50], int n)
{
    int i, S = 0,check=0;
    for (i = 0; i < n; i++)
    {
        S = S + strlen(str[i]);
    }
    float TB = (float)(S / n);
    for (i = 0; i < n; i++)
    {
        if (strlen(str[i]) > TB)
        {
            printf("\n\t\"%s\"", str[i]);
            check=1;
        }
    }
    if (check==0)
    {
        printf("\nKhong co chuoi nao dai hon %0.3f ",TB);
    }
    
    getch();
}
void XXTangGiam(char str[50][50], int n)
{
    char temp[50];
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strlen(str[i]) > strlen(str[j]))
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nMang cac chuoi xap xep tang dan la:\n");
    Xuat(str, n);
    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strlen(str[i]) < strlen(str[j]))
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("\nMang cac chuoi xap xep giam dan la:\n");
    Xuat(str, n);
    getch();
}
void InXauDoiXung(char a[],int *check)
{
    int i = 0, m = strlen(a) / 2, kq = 1;
    for (i; i <= m; i++)
    {
        if (a[i] != a[strlen(a) - i - 1])
        {
            kq = 0;
            break;
        }
    }
    if (kq == 1)
    {
        printf("\n+  \"%s\"", a);
        *check=1;
    }
}
void Doixung(char str[50][50], int n)
{
    int i,check=0;
    for (i = 0; i < n; i++)
    {
        InXauDoiXung(str[i],&check);
    }
    if (check==0)
    {
        printf("khong co chuoi nao doi xung ");
    }
    getch();
}
void InkyTuso(char a[],int *check)
{
    int i;
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            printf("\n+  \"%s\"", a);
            *check=1;
            break;
        }
    }
}
void Kytuso(char str[50][50], int n)
{
    int i,check=0;
    for (i = 0; i < n; i++)
    {
        InkyTuso(str[i],&check);
    }
    if (check==0)
    {
        printf("khong co chuoi nao chua ky tu so");
    }
    getch();
}
void timKytu(char a[], char c,int *check)
{
    int i;
    for (i = 0; i < strlen(a); i++)
    {
        if (strchr(a, c) != NULL)
        {
            *check=1;
            printf("\n+  \"%s\"", a);
            break;
        }
    }
}
void Kytu(char str[50][50], int n)
{
    int i,check=0;
    char c;
    
    fflush(stdin);
    printf("Nhap 1 ky tu bat ky: ");
    c = getchar();
    for (i = 0; i < n; i++)
    {
        timKytu(str[i], c,&check);
    }
    if (check==0)
    {
        printf("khong co chuoi nao chua \'%c\'",c);
    }
    
    getch();
}
void NoiChuoi(char str[50][50], int n)
{
    int i,Slen=0;
    fflush(stdin);
    char SChuoi[2500];
    for ( i = 0; i < n; i++)
    {
        strcat(SChuoi,str[i]);
    }
    printf("\nChuoi sau khi noi la: \"%s\"\n",SChuoi);
    strcpy(SChuoi, "");
    getch();
}