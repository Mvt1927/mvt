#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
boolean KiemTraNguyenTo(int n);
void LietKeNguyenTo(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    printf("Cac so nguyen to nho hon %d la:",n);
    LietKeNguyenTo(n);
    getch();
    return 0;
}
boolean KiemTraNguyenTo(int n)
{
    if (n < 2)
    {
        return FALSE;
    } else if (n > 2)
        {
            if (n % 2 == 0)
        {
            return FALSE;
        }
        for (int i = 3; i <= sqrt((float)n); i += 2)
        {
            if (n % i == 0)
            {
            return FALSE;
            }
        }
    }
    return TRUE;
}
void LietKeNguyenTo(int n)
{
    for(int i = 2; i < n; i++)
    {
        if(KiemTraNguyenTo(i) == TRUE)
        printf("%4d", i);
    }
}