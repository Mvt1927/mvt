#include<stdio.h>

int n, i, a[100], max, min;
float Avg;
void nhap();
void Max();
void Min();
void Tinh();

int main()
{
	nhap();
	Max();
	Min();
	Tinh();
	return 0;
}
void nhap(){
	printf("Nhap n: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void Max(){
	i=1;
	max = a[i];
	for(i = 1; i<= n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	printf("Max = %d\n", max);
}
void Min(){
	i=1;
	min = a[i];
	for (i = 1; i <= n; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	printf("Min = %d\n", min);
}
void Tinh(){
	Avg = ((float)(max + min)/2);
	printf("Trung binh 2 so Min va Max la: %f", Avg);
}

