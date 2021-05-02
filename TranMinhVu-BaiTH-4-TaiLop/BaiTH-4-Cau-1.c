#include <stdio.h>
double binhphuong(double a)
{
 return (a * a);
}
int main(int argc, char const *argv[])
{
 float n,bp;
 printf("Nhap vao mot so: ");
 scanf("%f", &n);
 bp = binhphuong(n);
 printf("Binh phuong cua %f la: %0.5f\n", n, bp);
 return 0;
}