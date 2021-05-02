#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(int argc, char const *argv[])
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
    return 0;
}
