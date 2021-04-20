#include <stdio.h>
void InUoc(int a);
int main(int argc, char const *argv[])
{
    int n;
    printf("nhap gia tri n= ");
    scanf("%d",&n);
    printf("\nCac uoc cua %d la : ",n);
    InUoc(n);
    return 0;
}
/***************************/
void InUoc(int a)
{
    int i;
    for ( i = 1; i < a ; i++)
    {
        if (a%i==0)
        {
            printf("%d; ",i);
        }  
    }
}
/****************************/