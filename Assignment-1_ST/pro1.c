#include <stdio.h>
#include <math.h>
int DecToOct(int number)
{
    int p = 0;
    int octNumber = 0;
    while (number > 0)
    {
        octNumber += (number % 8) * pow(10, p);
        p++;
        number /= 8;
    }
    return octNumber;
}
void hexa(int n)
{
    int i = 0, j = 0, b;
    int a[20];
    while (n != 0)
    {
        a[j] = n % 16;
        n = n / 16;
        j++;
    }
    for (i = j; i >= 0; i--)
    {
        b = j;
        if (a[i] < 10)
        {
            if (i == b && a[i] == 0)
            {
                b--;
            }
            else
            {
                printf("%d", a[i]);
            }
        }
        else
            switch (a[i])
            {
            case 10:
                printf("A");
                break;
            case 11:
                printf("B");
                break;
            case 12:
                printf("C");
                break;
            case 13:
                printf("D");
                break;
            case 14:
                printf("E");
                break;
            case 15:
                printf("F");
                break;
            }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("Decimal value is: %d", n);
    printf("\nOctal value is: %d", DecToOct(n));
    printf("\nHexadecimal value is (Alphabet in small letters): ");
    hexa(n);
    return 0;
}
