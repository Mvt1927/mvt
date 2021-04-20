#include<stdio.h>
void Nhap(int x[100],int n);
void Xuat(int x[100],int n);
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
void XX(int a[100],int n){
    for (int i = 1; i <=n-1; i++) {
            for (int j = i+1; j<=n; j++) {
                if (a[i]<a[j]) {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
}
