#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void write();

void read();

float tongbp()
{
    int i;
    float tong = 0;
    FILE *f = fopen("input", "rt");
    do
    {
        float a;
        fscanf(f, "%f", &a);
        if (!feof(f))
            tong += a * a;
    } while (!feof(f));
    fclose(f);
    return tong;
}
int main(int argc, char const *argv[])
{
    write();
    read();
    printf("\n Tong binh phuong cac so la %.2f \n ", tongbp());
    return 0;
}
void read()
{
    int i;
    float a;
    FILE *f = fopen("input", "rt");
    printf("\n Noi dung tap tin la : \n\n");
    do
    {
        fscanf(f, "%f", &a);
        if (!feof(f))
            printf("%.2f ", a);
    } while (!feof(f));
    fclose(f);
}
void write()
{
    FILE *f = fopen("input", "wt");
    for (int i = 1; i <= 10; i++)
    {
        float a;
        printf("\n Nhap so thu %d: ", i);
        scanf("%f", &a);
        fprintf(f, "%f ", a);
    }
    fclose(f);
}