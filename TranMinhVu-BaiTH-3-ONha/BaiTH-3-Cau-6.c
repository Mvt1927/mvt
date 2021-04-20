#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<conio.h>
void Gptb2();
int gt();
int main(int argc, char const *argv[])
{
    int n,m,s;
    char c;
    c ='k';
    while (c=='k') {
    do
    {
        system("cls");
        printf("************************************\n");
        printf("*          Menu chuc nang          *\n");
        printf("*    1. giai phuong trinh bac 2    *\n");
        printf("*    2. Tinh giai thua n           *\n");
        printf("*    3. Ket thuc chuong tinh       *\n");
        printf("************************************\n");
        printf("Hay chon chuc nang can thuc hien:  ");
        scanf("%d",&m);
        if (m!=3 && m!=2 && m!=1)
        {
            printf("nhap sai moi nhap lai \n");
            Sleep(1000);
        }
    } while (m!=3 && m!=2 && m!=1);
    switch (m)
    {
    case 1:
        Gptb2();
        getch();
        break;
    case 2:
        do
        {
            printf("\nNhap n: ");
            scanf("%d",&n);
            if (n<=0)
            {
                printf("\nNhap sai moi nhap lai ");
            }
        } while (n<=0);
        s=gt(n);
        printf("%d! = %d",n,s);
        getch();
        break;
    case 3:
        printf("\nBan co muon thoat truong trinh khong (c/k) ");
        scanf("%s",&c);
        break;
    default:
        break;
    }
}
    return 0;
}
void Gptb2() 
{
    float a, b, c, delta, x, x1, x2;
    printf("nhap a= ");
    scanf("%f", &a);
    printf("nhap b= ");
    scanf("%f", &b);
    printf("nhap c= ");
    scanf("%f", &c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("phuong trinh vo so nghiem ");
            }
            else
            {
                printf("phuong trinh vo nghiem ");
            }
        }
        else
        {
            x = (-c) / b;
            printf("phuong trinh co 1 nghiem x= %f", x);
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta > 0)
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("\nphuong trinh co 2 nghiem ");
            printf("\nX1= %f", x1);
            printf("\nX2= %f", x2);
        }
        else
        {
            if (delta == 0)
            {
                x = -b / 2 * a;
                printf("\nphuong trinh co nghiem kep X1 = X2 = %f", x);
            }
            else
            {
                printf("\nphuong trinh vo nghiem");
            }
        }
    }
}
int gt( int a)
{
    if (a==1)
        return 1;
    else
        return a*gt(a-1);
    
}