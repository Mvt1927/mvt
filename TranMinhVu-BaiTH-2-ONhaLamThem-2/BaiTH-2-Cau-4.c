#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

boolean kt(int a)
{
    boolean x;
    x=FALSE;
    char s[15];
    int a1,t;
	itoa(a,s,10);
	a1=a;
	t=0;
    for (int i = 1; i <= strlen(s); i++)
    {
        t=t+pow((a1%10),2);
        a1=a1/10;
    }
    if (t==a)
    {
        x=TRUE;
    }
    else
    {
        x=FALSE;
    }   
    return x;
}
int main(int argc, char const *argv[])
{
    int j,n;
    printf("Nhap n: ");
    scanf("%d",&n);
    for ( j=n; j >= 1; j--)
    {
        if (n=1)
        {
            printf("Khong co gia tri ");
            break;
        }
        else if (kt(j)==TRUE)
        {
            printf("%d  ",j);
        }
    }  
    return 0;
}
