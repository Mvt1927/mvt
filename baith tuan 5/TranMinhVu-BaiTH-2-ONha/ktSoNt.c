#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    boolean kt= TRUE;
    do
    {
        printf("Nhap n= ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Nhap sai moi nhap lai \n");
        }   
    } while (n<=0);
    if (n==1)
    {
        kt=FALSE;
    } 
    else
	{
		for (int i=2;i <= sqrt(n) ; i++)
        {
            if (n%i==0)
            {
                kt= FALSE;
            }        
        }
        if (kt==TRUE)
        {
            printf("%d la so nguyen to ",n);
        }
        else
        {
            printf("%d khong phai la so nguen to ",n);
        }  
    }
    return 0;
}
