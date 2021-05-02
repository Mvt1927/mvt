#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int i,n,s;
    printf("Nhap n: ");
    scanf("%d",&n);
    s=0;
    i = 1;  
    while (i <=n)
    {
        s+=pow(i,2);
        i++; 
    }
    printf("S = %d",s);   
    return 0;
}
