#include <stdio.h>
void TongUoc(int a);
int main(int argc, char const *argv[])
{
    int n;
    printf("nhap gia tri n= ");
    scanf("%d",&n);
    TongUoc(n);
    return 0;
}
/***************************/
void TongUoc(int a)
{
    int i,s=0;
    for ( i = 1; i < a ; i++)
    {
        if (a%i==0)
        {
            s=s+i;
        }  
    }
    printf("Tong cac uoc cua %d la %d ",a,s);
}
/****************************/