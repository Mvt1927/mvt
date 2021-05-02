//Quan li diem thi dai hoc khoi A
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
struct Sinhvien
{
	char Sbd[10];
	char Hoten[30];
	char Namsinh[10];
	float Diemtoan, Diemhoa, Diemly;
};
typedef Sinhvien SV;
void Nhap(SV *sv);
void NhapN(SV a[], int n);
float Tongdiem(SV sv);
void Xuat(SV sv);
void XuatN(SV a[], int n);
bool Trungtuyen(SV sv, float Diemchuan);
void DStrungtuyen(SV a[], int n);

int main()
{
	struct Sinhvien SV[100];
	int i, n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d", &n);
	NhapN(SV, n);
	XuatN(SV, n);
	DStrungtuyen(SV, n);
	return 0;
}
void Nhap(SV *sv)
{
	printf("\nNhap so bao danh: ");
	fflush(stdin);
	gets(sv->Sbd);
	printf("\nNhap ho va ten: ");
	gets(sv->Hoten);
	printf("\nNhap ngay sinh: ");
	gets(sv->Namsinh);
	printf("\nDiem toan: ");
	scanf("%f", &sv->Diemtoan);
	printf("\nDiem hoa: ");
	scanf("%f", &sv->Diemhoa);
	printf("\nDiem ly: ");
	scanf("%f", &sv->Diemly);
}
void NhapN(SV a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap sinh vien thu %d: ", i + 1);
		Nhap(&a[i]);
	}
}

void Xuat(SV sv)
{
	printf("\nSBD sinh vien: %s", sv.Sbd);
	printf("\nHo va ten: %s", sv.Hoten);
	printf("\nNgay sinh: %s", sv.Namsinh);
	printf("\nDiem toan - hoa - ly: %.2f - %.2f - %.2f", sv.Diemtoan, sv.Diemhoa, sv.Diemly);
	printf("\nTong diem cua sinh vien: %.2f", Tongdiem(sv));
}
void XuatN(SV a[], int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("\nThong tin sinh vien thu %d: ", i + 1);
		Xuat(a[i]);
	}
}
float Tongdiem(SV sv)
{
	return sv.Diemtoan + sv.Diemhoa + sv.Diemly;
}
bool Trungtuyen(SV sv, float Diemchuan)
{
	bool Trungtuyen = false;
	if (Tongdiem(sv) >= Diemchuan && sv.Diemtoan > 0 && sv.Diemhoa > 0 && sv.Diemly > 0)
		Trungtuyen = true;
	return Trungtuyen;
}
void DStrungtuyen(SV a[], int n)
{
	float Diemchuan;
	printf("\nNhap diem chuan: ");
	scanf("%f", &Diemchuan);
	printf("\nDanh sach sinh vien trung tuyen: ");

	for (int i = 0; i < n; i++)
	{
		if (Trungtuyen(a[i], Diemchuan))
			Xuat(a[i]);
	}
}
