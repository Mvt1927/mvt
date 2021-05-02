#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,t,i;
    int A[32]; 
    printf("nhap n: ");
    scanf("%d",&n);
    t = n;
    for ( i = 1; t != 0 ; i++) 
    {
        A[i] = t%2;
        t = t/2;   
    }
    printf("%d doi xang nhi phan la : ",n);
        for (int j = i-1; j > 0 ; j--) 
        {
            printf("%d",A[j]);
        }    
    return 0;
}
