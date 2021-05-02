#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,d,max;
    printf("nhap vao 4 so thuc ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    max=a;
    if (max < b)
    {
        max=b;   
    }
    if (max < c)
    {
        max=c;
    }
    if (max < d)
    {
        max=d;
    }
    printf("so lon nhat la %0.5f",max);
    
    
    return 0;
}
