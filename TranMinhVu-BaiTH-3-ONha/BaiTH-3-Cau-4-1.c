#include <stdio.h>
int Fibonaxi(int n);
int main(){
    int n,i;
    printf("Nhap n: ");
    scanf("%d", &n);
    i=1;
    while (n>=Fibonaxi(i))
    {
        printf("%d",Fibonaxi(i));
        i++;
        if (n>=Fibonaxi(i))
        {
            printf("; ");
        }   
    }
}
int Fibonaxi(int n)
{
    if (n == 1 || n == 2)
    return 1;
    return Fibonaxi(n - 1) + Fibonaxi(n - 2);
}
