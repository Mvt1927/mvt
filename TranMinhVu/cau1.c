#include<stdio.h>
int main(int argc, char const *argv[])
{
    float r,v,s;
    float PI = 3.14159265;
    do
    {
        printf(" nhap ban kinh khoi cau:\nr = ");
        scanf("%f",&r);
        if (r<=0)
        {
            printf("nhap sai moi nhap lai \n");
        }
        
    } while (r<=0);
    
    v= 1.333333*PI*r*r*r;
    s= 4*PI*r*r;
    printf("the tich bang %0.5f\n",v);
    printf("dien tich bang %0.5f\n",s);
    return 0;
}
