#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Nhap n: ");
    scanf("%d",&n);
    i = 1;
    while (  i <=10 )
    {
        printf("%d  x %2d = %d\n",n,i,i*n);
        i++;
    }
    
    return 0;
}
