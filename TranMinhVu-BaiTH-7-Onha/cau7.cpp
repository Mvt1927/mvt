#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 100
#define dl "test.inp"
void LuuFile(int a[MAX][MAX], int m, int n)
{
    FILE *f;
    f = fopen(dl, "wt");
    if (f == NULL)
    {
        printf("\nKhong tao duoc file.");
        getch();
        exit(0);
    }
    fprintf(f, "%d %d\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fprintf(f, "%d\t", a[i][j]);
        fprintf(f, "\n");
    }
    fclose(f);
}
void DocFile(int a[MAX][MAX], int &m, int &n)
{
    FILE *f;
    f = fopen(dl, "rt");
    if (f == NULL)
    {
        printf("\nKhong doc duoc file.");
        getch();
        exit(0);
    }
    fscanf(f, "%d%d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fscanf(f, "%d", &a[i][j]);
    }
    fclose(f);
}
int main(int argc, char const *argv[])
{
    int a[MAX][MAX], m = 5, n = 6, i, j;
    int b[MAX][MAX], x, y;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            a[i][j] = rand() / 100;
    LuuFile(a, m, n);
    DocFile(b, x, y);
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }
    return 0;
}