#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b;
    printf("Moi nhap chieu dai\n");
    scanf("%f",&a);
    printf("Moi nhap chieu rong\n");
    scanf("%f",&b);
    printf("Chu vi hinh chu nhat co chieu dai %0.2f chieu rong %0.2f la %0.2f \n",a,b,2*(a+b));
    printf("Dien tich hinh chu nhat co chieu dai %0.2f chieu rong %0.2f la %0.2f",a,b,a*b);
    getch();
    return 0;
}