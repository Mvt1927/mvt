#include <stdio.h>
#include<conio.h>
#include <math.h>
#include<windows.h>
boolean ktCP(int b) 
{
    int a;
    boolean kt;
    if(b>0)
    {
        a=sqrt(b);
        if((a*a)==b)
        {
            //printf("So ban da nhap vao la so chinh phuong");
            kt= TRUE;
        }
        else
        {
            //printf("So ban da nhap vao ko phai la so chinh phuong");
            kt=FALSE;
        }
    }
    return kt;
}
int main(int argc, char const *argv[])
{
    int n,i;
    do
    {
        printf("Nhap n= ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Nhap sai moi nhap lai \n");
        }   
    } while (n<=0);
    printf("Cac so chinh phuong nho hon %d la: ",n);
    for ( i = 1; i < n; i++)
    {
        if (ktCP(i)==TRUE)
        {
            printf("%d; ",i);
        }
    }
    return 0;
}
