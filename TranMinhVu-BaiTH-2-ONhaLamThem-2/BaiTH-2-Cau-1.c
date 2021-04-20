#include<stdio.h>
float GT(int a)
{
    if(a == 0 || a == 1)
    return 1;
    else
    return a*GT(a-1);
}
int main(int argc, char const *argv[])
{
    int n,i;
    float s;
    printf("Nhap n= ");
    scanf("%d",&n);
    s=0;
    printf("S = ");
    for ( i = 1; i <= n; i++)
    {
        if (i<n)
        {
            printf("1/%d! +",i);
        }
        else
        {
            printf("1/%d! ",n);
        }
        
        s=s+1/(GT(i));
    }
    printf(" %0.6f",s);
    return 0;
}
