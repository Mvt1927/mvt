#include <stdio.h>
#include <conio.h>
void main()
{
int a = 10;
float b = 24.67892345;
char ch = 'A';
system("cls");
printf("Du lieu so nguyen :%d\n",a);
printf("Du lieu so thuc :%f\n",b);
printf("Du lieu ki tu :%c\n",ch);
printf("Lap trinh c co ban\n");
printf("%s","Lap trinh c co ban\n");
printf("Du lieu theo so mu :%e\n",b);
printf("Du lieu theo he thap luc phan :%x\n",a);
printf("Canh du lieu so nguyen 1 :[%10d]\n",a);
printf("Canh du lieu so nguyen 2 :[%-10dAAA]\n",a);
printf("Canh du lieu so nguyen 3 :[%010d]\n",a);
printf("Canh du lieu so nguyen 4 :[%-010dAAA]\n",a);
printf("Canh du lieu so thuc :[%010.3f]\n",b);
printf("Canh du lieu so thuc :[%-10.3fAAA]\n",b);
getch();
}