#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
void menu(void);
void nhapChuoi(char str[]);
void KTXauDoiXung(char str[]);
void demsotu(char str[]);
void xoaCuoi(char str[]);
void xoadau(char str[]);
void TB(char str[]);
void Demkytu(char str[]);
int main()
{

    char str[50];
    int chon;

    while (1)
    {
        system("cls");
        menu();
        if (strlen(str) != 0)
        {
            printf("\nChuoi da nhap : '%s'", str);
        }
        printf("\nMoi Ban chon mot muc: ");

        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            nhapChuoi(str);
            break;
        case 2:
            KTXauDoiXung(str);

            break;
        case 3:
            demsotu(str);

            break;
        case 4:
            xoaCuoi(str);

            break;
        case 5:
            xoadau(str);

            break;
        case 6:
            TB(str);

            break;
        case 7:
            Demkytu(str);

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
    printf("\n1. Nhap 1 chuoi co kich thuoc 0-50");
    printf("\n2. Kiem tra tinh doi xung ");
    printf("\n3. Kiem tra so tu");
    printf("\n4. Cat dau cach (space) cuoi chuoi");
    printf("\n5. Cat dau cach (space) Dau chuoi");
    printf("\n6. Trung binh ASCII cua chuoi");
    printf("\n7. Dem tan suat ky tu co trong chuoi");
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
void KTXauDoiXung(char str[])
{
    int i = 0, m = strlen(str) / 2, kq = 1;
    for (i; i <= m; i++)
    {
        if (str[i] != str[strlen(str) - i - 1])
        {
            kq = 0;
            break;
        }
    }
    if (kq == 1)
    {
        printf("\nChuoi da nhap doi xung.");
        getch();
    }
    else
    {
        printf("\nChuoi da nhap ko  doi xung.");
        getch();
    }
}
void demsotu(char str[])
{
    int n = strlen(str), i;
    int dem = 0;
    if (str[0] != ' ')
        dem = 1;
    for (i = 0; i < n - 1; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            dem++;
    }
    printf("Chuoi da nhap co %d tu", dem);
    getch();
}
void xoaCuoi(char str[])
{
    int i, len = strlen(str) - 1;
    fflush(stdin);
    char a[50];
    while (str[len] == ' ')
    {
        str[len] = '\0';
        len = strlen(str) - 1;
    }
    for (i = 0; i < len; i++)
    {
        a[i] = str[i];
        len = strlen(str);
    }
    printf("\nChuoi sau khi xoa : '%s\'", a);
    getch();
}
void xoadau(char str[])
{
    int i, len = strlen(str) - 1;
    fflush(stdin);
    char a[50];
    while (str[0] == ' ')
    {
        for (i = 0; i < len - 1; i++)
        {
            str[i] = str[i + 1];
        }
        str[len] = '\0';
        len = len - 1;
    }

    printf("\nChuoi sau khi xoa : '%s\'", str);
    getch();
}
void TB(char str[])
{
    int i, s = 0, len;
    float T;
    len = strlen(str);
    for (i = 0; i <= len - 1; i++)
    {
        s = s + str[i];
        //printf("%d\t",str[i]);
    }
    T = (float)(s / (len));
    //printf("\n%d:%d\n",s,len);
    printf("Trung binh cac ky tu la %0.5f", T);
    getch();
}
void Demkytu(char str[])
{
    int count[122] = {0};
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        if (!count[str[i]])
        {
            count[str[i]] = 1;
            for (int j = i + 1; j < n; j++)
                if (str[j] == str[i])
                    count[str[i]]++;
        }
    }
    for (int i = 48; i < 122; i++)
        if (count[i])
            printf("%c co %d ky tu\n", i, count[i]);
    getch();
}