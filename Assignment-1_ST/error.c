#include <stdio.h>
void Putpoint(float *p[], int n)
{
    int i, j;
    float tmp;
    for (i = 0; i < n; i++)
    {
        printf(" a(%d) = ", i + 1);
        scanf("%f", p[i]);
    }
}
void Sortpoint(float *p[], int n)
{
    float tmp;
    int i,j;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (*(p[j]) < *(p[i]))
            {   
                tmp = *(p[j]);
                *(p[j]) = *(p[i]);
                *(p[i]) = tmp;
            }
}
void printpoint(float *p[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("\n a(%d) = %6.2f", i + 1, *(p[i]));
}
int main(int argc, char const *argv[])
{
    float a[50];
    int n=3;
    Putpoint(&a[50],n);
    Sortpoint(&a[50],n);
    printpoint(&a[50],n);    
    return 0;
}
