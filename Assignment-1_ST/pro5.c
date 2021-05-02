#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    int a[100];
    srand((int)time(0));
    for (int i = 0; i < 100; ++i)
    {
        a[i] = rand();
        while (a[i]>1000||a[i]==0)
        {
            a[i] = rand();
        }
        
    }
    for (int i = 0; i < 100; i++)
    {
        printf(" %d\t;",a[i]);
        if ((i+1)%15==0)
        {
            printf("\n");
        }
        
    }
    
    return 0;
}
