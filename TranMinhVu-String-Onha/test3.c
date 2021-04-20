#include <stdio.h>
#include <string.h>
#include<conio.h>
void nhap(char a[50][50], int *n);
void Xuat(char a[50][50], int n);
int main(int argc, char const *argv[])
{
    char a[50][50];
    int n = 0;
    nhap(a, &n);
    Xuat(a, n);
}
void nhap(char a[50][50], int *n)
{
    int i;
    
    do
    {
        printf("Nhap n: ");
        scanf("%d", n);
        if (*n <= 0)
        {
            printf("Nhap sai nhap lai\n");
        }
    } while (*n <= 0);
    fflush(stdin);
    for (i = 1; i <= *n; i++)
    { 
        fflush(stdin);
        printf("nhap chuoi a[%d] : ", i);
        gets(a[i]);
       
    }
}
void Xuat(char a[50][50], int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
       puts(a[i]);
    }
}
