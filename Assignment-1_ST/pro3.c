#include<stdio.h>
int smallest (int num1,int num2,int num3)
{
    if (num1<num2)
        if (num2<num3) return num1;
        else if (num1<num3) return num1;
            else return num3;
    else if (num2<num3) return num2;
        else return num3;
} 
int main(int argc, char const *argv[])
{
    int a[3];
    for (int i = 0; i < 3; i++)
    {
        printf("nhap num%d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("%d", smallest(a[0],a[1],a[2]));
    return 0;
}
 