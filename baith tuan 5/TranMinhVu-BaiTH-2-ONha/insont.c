#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
boolean KTSoNT(int a)
{
    boolean kt = TRUE ;
    if (a<=1)
    {
        kt=FALSE;
    }  
    for (int i = 2; i <= sqrt(a) ; i++)
    {
        if (a%i==0)
        {
            kt=FALSE;
        }        
    }
    return kt;
}
int main(int argc, char const *argv[])
{
    int n,j;
    do
    {
        printf("Nhap n= ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Nhap sai moi nhap lai \n");
        }   
    } while (n<=0);
    printf("Cac so nt nho \phon %d : ",n);
    for (j = 1; j < n; j++)
    {   
       if (KTSoNT(j)==TRUE)
       {
           printf("%d; ",j);
       }   
    } 
    return 0;
}
