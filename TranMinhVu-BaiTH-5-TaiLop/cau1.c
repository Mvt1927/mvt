#include<stdio.h>
void Nhap(int x[100],int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf(" X[%d] = ",i);
        scanf("%d",&x[i]);
    }
    
}
void Xuat(int x[100],int n)
{
    int i;
    for (i = 0; i <n; i++)
    {
        printf("%d  ",x[i]);
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    int X[100];
    printf("Nhap n: ");
    scanf("%d",&n);
    Nhap(X[100],n);
    Xuat(X[100],n);

    return 0;
}
