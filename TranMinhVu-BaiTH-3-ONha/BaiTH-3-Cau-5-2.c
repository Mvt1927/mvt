#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,s1,i;
    float s2;
    n=0;
    do
    {
        printf("Nhap n: ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Nhap sai moi nhap lai\n ");
        }
    } while (n<=0);
    s1=s2=0;
    i = 1;
    while (  i <=n )
    {
        s1+=i;
        s2+=(float)1/i;
        i++;
    }
    printf("S(%d) = %d\n",n,s1);
    printf("S(%d) = %f\n",n,s2);
    return 0;
}
