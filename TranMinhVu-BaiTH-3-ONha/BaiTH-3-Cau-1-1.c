#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int i,n,s;
    printf("Nhap n: ");
    scanf("%d",&n);
    s=0;
    for ( i = 1; i <=n ; i++)
    {
        s+=pow(i,2);
    }
    printf("S = %d",s);   
    return 0;
}
