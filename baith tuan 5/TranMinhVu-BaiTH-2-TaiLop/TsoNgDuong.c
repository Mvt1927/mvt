#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,s,i;
    s=0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    for ( i = 1; i < n ; i++)
    {
        if (i%2==0)
        {
            s=s+i;
        }
    }
    printf("Tong cac so nguyen duong chan be hon %d la : %d",n,s);
    return 0;
}