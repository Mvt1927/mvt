#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("nhap so nguyen tu 1 den 4 ");
    scanf("%d",&n);
    switch (n)
    {
    case 1 :
        printf("Mua Xuan ");
        break;
    case 2 :
        printf("Mua Ha ");
        break;
    case 3 :
        printf("Mua Thu ");
        break;
    case 4 :
        printf("Mua Dong ");
        break;
    
    default:
        printf("nhap si du lieu");
        break;
    }
    return 0;
}
