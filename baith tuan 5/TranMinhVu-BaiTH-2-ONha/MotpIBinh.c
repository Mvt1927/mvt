#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int n,i,m;
    float s;
    printf("Nhap so hang thu n: ");
    scanf("%d",&n);
    s=1;
    printf("1 ");
    for ( i = 1; i <= n; i++)
    {
        s=s+1/(pow(2,i));
        m = pow(2,i);
        printf("+ 1/%d ",m);
    }
    printf("= %0.5f",s);
    return 0;
}
