#include<stdio.h>
void Nhap(int x[100],int n);
void Xuat(int x[100],int n);
int Count(int x[100],int n);
int Sum(int x[100],int n);
int main(int argc, char const *argv[])
{
    int n;
    int a[100];

    printf("Nhap n: ");
    scanf("%d",&n);
    Nhap(a[100],n);
    Xuat(a[100],n);
    int co=Count(a[100],n);
    int su=Sum(a[100],n);
    printf("\n%d\n%d",co,su);
    return 0;
}
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
int Count(int x[100],int n)
{
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]%7==0)
        {
            c=c+1;
        }
    }
    return c;
}
int Sum(int x[100],int n)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]%7==0)
        {
            s=s+x[i];
        }
    }
    return s;
}