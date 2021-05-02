#include <stdio.h>
int Fibonaxi(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    return Fibonaxi(n - 1) + Fibonaxi(n - 2);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("So Fibonaxi thu %d la: %d\n", n, Fibonaxi(n));
    return 0;
}