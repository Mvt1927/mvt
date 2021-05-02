#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Nhap n: ");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        printf("%d  x %2d = %d\n",n,i,i*n);
    }
    
    return 0;
}
