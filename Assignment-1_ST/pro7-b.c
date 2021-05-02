#include<stdio.h>
void cong(float num1, float num2);
void tru(float num1, float num2);
void nhan(float num1, float num2);
void chia(float num1, float num2);
void nhap(float *num1,float *num2 );
int main(int argc, char const *argv[])
{
    float num1, num2;
    nhap(&num1,&num2);
    cong(num1,num2);
    tru(num1,num2);
    nhan(num1,num2);
    chia(num1,num2);
    return 0;
}
void nhap(float *num1,float *num2){
    printf("Number 1: ");
    scanf("%f",&*num1);
    printf("Number 2: ");
    scanf("%f",&*num2);
}
void cong(float num1, float num2){
    printf("%.5f + %.5f = %.5f\n",num1,num2,num1+num2);
}
void tru(float num1, float num2){
    printf("%.5f - %.5f = %.5f\n",num1,num2,num1-num2);
}
void nhan(float num1, float num2){
    printf("%.5f x %.5f = %.5f\n",num1,num2,num1*num2);
}
void chia(float num1, float num2){
    printf("%.5f / %.5f = %.5f\n",num1,num2,num1/num2);
}
