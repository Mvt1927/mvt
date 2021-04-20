#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    long int n1,s;
    char n[100];
    printf("Nhap mot so nguyen n( n < 2147483647 ): ");
    gets(n);
    n1=atoi(n);
    s=0;
    printf("%d\n",n1);
    for (int i = 1; i <=strlen(n) ; i++)
    {
        s=s+n1%10;
        n1=n1/10;
    }
    
    printf("%d",s);
    return 0;
}
