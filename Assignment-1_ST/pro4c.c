#include<stdio.h>
int main(int argc, char const *argv[])
{
    float tongl, tongn,a;
    int  n,deml=0,demn=0;
    printf("n= ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%f",&a);
        if (a>0)
        {
            if (a<1)
            {
                tongn+=a;
                demn++;
            }
            else
            {
                tongl+=a;
                deml++;
            }
            
        }
        
    }
    printf("c) average1 = %.4f; average2 = %.4f",tongn/demn,tongl/deml);
    return 0;
}
