#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,gt;
    printf("Nhap n: ");
    scanf("%d",&n);
    gt=1;
    i = 1;
    while ( i <=n )
    {
        gt*=i;
        i++;
    }
    printf("%d! = %d",n,gt);
    return 0;
}
