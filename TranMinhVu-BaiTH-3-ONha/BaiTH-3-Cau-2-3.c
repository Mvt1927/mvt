#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("Nhap n: ");
    scanf("%d",&n);
    i = 1;
    do
    {
        printf("%d  x %2d = %d\n",n,i,i*n);
        i++;
    }while(  i <=10 );
    
    return 0;
}
