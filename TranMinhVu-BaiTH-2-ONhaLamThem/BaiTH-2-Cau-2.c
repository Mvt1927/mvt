#include<stdio.h>
int main(int argc, char const *argv[])
{
    int GT,n;
    do
    {
        printf("Nhap n (n<13): ");
        scanf("%d",&n);
        if (n<0)
        {
            printf("Nhap sai moi nhap lai \n");
        }
        else if (n>12)
        {
            printf("Qua gia tri cho phep moi nhap lai \n");
        }
    } while (n<0||n>12);
    GT=1;
    for (int i = 1; i <=n ; i++)
    {
        GT=GT*i;
    }
    printf("%d! = %d",n,GT);
    return 0;
}
