#include<stdio.h>
#include<math.h>
/**************************************************/
float GT(int a)
{
    if(a == 0 || a == 1)
    return 1;
    else
    return a*GT(a-1);
}
/**************************************************/
int main(int argc, char const *argv[])
{
    int i,m;
    float s,x,e,n;
    printf("nhap sai so: ");
    scanf("%f",&n);
    m=0;
    do
    {
        printf("\n1. Radian  (Rad)");
        printf("\n2. Degree  (Do)\n");
        printf("Nhap don vi cua so do goc ");
        scanf("%d",&m);
        if (m!=1 && m!=2)
        {
            printf("Nhap sai moi nhap lai \n");
        }   
    } while (m!=1 && m!=2);
    if (m==1)
    {
        printf("nhap x (Rad): ");
        scanf("%f",&x);
        printf("Sin(%fPI)=",x);
    }
    else
    {
        printf("nhap x (Do): ");
        scanf("%f",&x);
        printf("Sin(%f Do)=",x);
        x=x*3.141593/180;
    } 
    i=s=0;
    e=1;
    while (fabs(e)>n)
    {
        e=pow((-1),i)*(pow(x,(2*i+1))/(GT(2*i+1)));
        s=s+e;
        i++;
    }
    printf("%f",s);
    return 0;
}
