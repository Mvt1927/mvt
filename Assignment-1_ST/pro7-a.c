#include<stdio.h>
int main(int argc, char const *argv[])
{
    float num1, num2;
    printf("Number 1: ");
    scanf("%f",&num1);
    printf("Number 2: ");
    scanf("%f",&num2);
    printf("%.5f + %.5f = %.5f\n",num1,num2,num1+num2);
    printf("%.5f - %.5f = %.5f\n",num1,num2,num1-num2);
    printf("%.5f x %.5f = %.5f\n",num1,num2,num1*num2);
    printf("%.5f / %.5f = %.5f\n",num1,num2,num1/num2);
    return 0;
}
