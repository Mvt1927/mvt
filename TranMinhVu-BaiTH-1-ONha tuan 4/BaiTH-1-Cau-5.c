#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    float s,t;
    t= 0;
    printf("nhap chieu dai quang duong can di theo don vi km : ");
    scanf("%f",&s);
    if (s<=1)
    {
        t= s*10000;
        printf("so tien pahi tra khi di %0.1f km ( chinh xac la %0.0f m ) la %0.0f dong ",s,s*1000,t);
    }
    else
    {
        if (s<=30)
        {
            t= 10000 + (s-1)*50000;
            printf("so tien pahi tra khi di %0.1f km ( chinh xac la %0.0f m ) la %0.0f dong ",s,s*1000,t);
        }
        else
        {
            t= 1460000 + (s-30)*7000 ;
            printf("so tien pahi tra khi di %0.1f km ( chinh xac la %0.0f m ) la %0.0f dong ",s,s*1000,t);
        }
        
    }
    
    return 0;
}
