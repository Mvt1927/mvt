#include <stdio.h>
int main(int argc, char const *argv[])
{
    float a[1000], tong, tb1, tongl, tongn;
    int n, dem=0,deml=0,demn=0;
    printf("n=");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%f",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0)
        {
            tong +=a[i];
            dem++;
            if (a[i]<1)
            {
                tongn +=a[i];
                demn++;
            }
            else
            {
                tongl +=a[i];
                deml++;
            }
            
        }
         
    }
    printf("a) average=%.4f\n",tong/dem);
    printf("b) average1 = %.4f; average2 = %.4f",tongn/demn,tongl/deml);    
    return 0;
}
