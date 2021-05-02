#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    if (n==0)
    {
        printf("ban vua nhap vao so 0 ");
    }
    else
    {
        if (n>0)
        {
            printf("do la so duong");
        }
        else
        {
            printf("%d",n*n);
        }
        
    }
    
    return 0;
}
