#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,gt;
    printf("Nhap n: ");
    scanf("%d",&n);
    gt=1;
    i = 1;
    do 
    {
        gt*=i;
        i++;
    }while(  i <=n );
    printf("%d! = %d",n,gt);
    return 0;
}
