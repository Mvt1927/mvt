#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<windows.h>

int main(){
	int x, y, z;
	printf("Nhap vao gia tri x: ");
	scanf("%d", &x);
	printf("Nhap vao gia tri y: ");
	scanf("%d", &y);
	z = pow(x,y);	
	system("cls");
	printf("Ket qua x luy thua y \n");
	printf("x = %d \n",x);		
	printf("y = %d \n",y);
	printf("x luy thua y = %d",z);
	
	return 0;
	//comm
}
