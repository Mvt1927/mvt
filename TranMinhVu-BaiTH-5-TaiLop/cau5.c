#include<stdio.h>
#include<conio.h>
void nhap(int X[50],int temp);
void xuat(int X[50],int n);
void tong(int X[50],int n);

int main(){
int a[50],n;
int *pn;
n=*pn;
n=nhap(a);
xuat(a,n);
tong(a,n);
return 0;
}
void nhap(int X[],int temp){
	int i=0;
	printf("nhap so luong phan tu: ");
	scanf("%d",&temp);
	int*pn=&temp;
	for(i=0;i<temp;i++){
	printf("phan tu thu %d :",i);
	scanf("%d",&X[i]);
	}
}

void xuat(int X[50],int n){
	int i=0;
	for(i=0;i<n;i++)
		printf("%d \t",X[i]);

}

void tong(int X[50],int n){
	int i=0;int s=0;
    
	printf("\nTong cac so trong day la: ");
	for(i=0;i<n;i++){
	    s=s+X[i];
	}
	printf(" %d",s);
}