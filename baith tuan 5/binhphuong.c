#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Nhap sai nhap lai \n");
        }
        
    } while (n<=0);
    int s=0;
    int i=1;
    while (i<=n)
    {
        s+=pow(i,2);
        i++;
    }
    printf("S = %d",s);
    return 0;
}
