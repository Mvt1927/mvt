#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    float t;
    printf("moi nhap nhiet do theo do c: " );
    scanf("%f",&t);
    if (t<0)
    {
        printf("Thoi tiet dong bang");
    }
    else
    {
        if (t<10)
        {
            printf("Thoi tiet rat lanh");
        }
        else
        {
            if (t<20)
            {
                printf("Thoi tiet lanh");
            }
            else
            {
                if (t<30)
                {
                    printf("Thoi tiet binh thuong");
                }
                else
                {
                    if (t<40)
                    {
                        printf("Thoi tiet nong");
                    }
                    else
                    {
                        printf("Thoi tiet rat nong");
                    }
                    
                }
                
            }
            
        }
        
    }
    
    return 0;
}
