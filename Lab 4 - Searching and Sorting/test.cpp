#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void random(int a[])
{
    srand((int)time(0));
    for (int i = 0; i < 100; ++i)
    {
        a[i] = rand();
        while (a[i] > 1000 || a[i] == 0)
        {
            a[i] = rand();
        }
    }
}
void display(int a[])
{
    for (int i = 0; i < 100; i++)
    {
        printf(" %d\t;", a[i]);
        if ((i + 1) % 20 == 0)
        {
            printf("\n");
        }
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Interchange(int a[])
{
    for (int i = 0; i < 99; i++)
    {
        for (int j = i + 1; j < 100; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}
int main(int argc, const char *argv[])
{

    clock_t start, end;
    double time_use;
    int a[100];
    random(a);
    display(a);
    start = clock();
    Interchange(a);
    end = clock();
    time_use = (double)(end - start)/CLOCKS_PER_SEC;
    printf("interchangeSort take %.10f seconds\n", time_use);
    display(a);
    return 0;
}