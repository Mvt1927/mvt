#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int i,n,x;
    float s=1;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("nhap x: ");
    scanf("%d",&x);
    for ( i = 1; i <= n; i++)
    {
        s*=(float)(1/(pow(x,i)));
    }
    printf("%f",s);
    return 0;
}
