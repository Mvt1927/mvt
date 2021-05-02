#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    printf("Cac uoc cua %d la: 1",n);
    for ( i = 2; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("; %d",i);
        }    
    }
    return 0;
}
