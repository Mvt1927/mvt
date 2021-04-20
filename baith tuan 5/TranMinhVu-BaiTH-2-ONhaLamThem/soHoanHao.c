#include<stdio.h>
#include<windows.h>
boolean SOHH(int a )
{
    int s,i;
    boolean kt;
    kt= FALSE;
    for ( i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            s=s+i;
        }    
    }
    if (s==a)
    {
        kt=TRUE;
    }
    
    return kt;
}
int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("Nhap n (n>0): ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Nhap sai moi nhap lai \n");
        }
    } while (n<0);
    if (SOHH(n)==TRUE)
    {
        printf("\n%d la so hoan hao ",n);
    }
    else
    {
        printf("\n%d khong la so hoan hao ",n);
    }
    
    return 0;
}
