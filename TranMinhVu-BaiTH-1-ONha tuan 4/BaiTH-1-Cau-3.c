#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(int argc, char const *argv[])
{
    int m,y;
    bool n = false;
    printf("nhap thang: ");
    scanf("%d",&m);
    /*if (m>12||m<1)
    {
        
    }
    */
    printf("nhap nam: ");
    scanf("%d",&y);
    if (( y%4 == 0 && y%100 != 0) || y%400 == 0 )
    {
        n = true;
    }
    /*if ( y%400 == 0)
    {
        n = true;
    }
    */
    switch (m)
    {
    case 2:
        if (n = true )
        {
            printf("\nNam %d la nam nhuan nen thang 2 co 29 ngay ",y);
        }
        else
        {
            printf("\nNam %d la nam khong nhuan nen thang 2 co 28 ngay ",y);
        }   
        break;
    default:
        if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            printf("\nThang %d nam %d co 31 ngay ",m,y);
        }
        else 
            {
                if (m==4||m==6||m==9||m==11)
                {
                    printf("\nThang %d nam %d co 30 ngay ",m,y);
                }
                else
                {
                    printf("\nTrong 1 Nam khong co thang %d",m);
                }
                
            }
        break;
    }
    return 0;
}
