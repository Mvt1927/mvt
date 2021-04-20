#include <stdio.h>
#include <string.h>
struct NgThang
{
    int ngay;
    int thang;
    int nam;
};

struct SinhVien
{
    char Ho[50];
    char Ten[50];
    NgThang NgaySinh;
    char Que[50];
};
void Nhap(SinhVien *sv);

void NhapN(SinhVien a[], int n);

void Xuat(SinhVien sv);

void XuatN(SinhVien a[], int n);

void FindName(SinhVien a[], int n);

void xapxep(SinhVien a[], int n);

void XoaSV(SinhVien a[], int *n);

int main(int argc, char const *argv[])
{
    struct SinhVien sv[100];
    int i, n;
    char choice='y';
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    NhapN(sv, n);
    xapxep(sv,n);
    do
    {
        printf("Ban muon them sinh vien ko ? (y\\n)");
        scanf("%c",&choice);
        if (choice=='y')
        {
            n++;
            Nhap(&sv[n-1]);
            xapxep(sv,n);
        }
        
    } while (choice=='y');
    XuatN(sv, n);
    FindName(sv, n);
    XoaSV(sv,&n);
    XuatN(sv,n);
    return 0;
}

void Nhap(SinhVien *sv)
{
    printf("\nNhap Ho ");
    fflush(stdin);
    gets(sv->Ho);
    printf("\nNhap Ten: ");
    gets(sv->Ten);
    printf("\nNhap ngay sinh: ");
    scanf("%d/%d/%d", &sv->NgaySinh.ngay, &sv->NgaySinh.thang, &sv->NgaySinh.nam);
    printf("\nNhap que quan: ");
    fflush(stdin);
    gets(sv->Que);
}

void NhapN(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap sinh vien thu %d: ", i + 1);
        Nhap(&a[i]);
    }
}

void Xuat(SinhVien sv)
{
    printf("\n%s", sv.Ho);
    printf(" %s ", sv.Ten);
    printf(": %d/%d/%d ", sv.NgaySinh.ngay, sv.NgaySinh.thang, sv.NgaySinh.nam);
    printf(": %s", sv.Que);
}
void XuatN(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n======================================\nSV[%d]: ",i+1);
        Xuat(a[i]);
    }
}
void FindName(SinhVien a[], int n)
{
    char t[50];
    int i;
    printf("\nNhap ten can tim: ");
    gets(t);
    for (i = 0; i < n; i++)
    {
        if (strcmp(t, a[i].Ten) == 0)
        {
            printf("\n=============\nSV[%d]",i+1);
            Xuat(a[i]);
        }
    }
}
void xapxep(SinhVien a[], int n)
{
    SinhVien temp;
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(a[i].Ten, a[j].Ten) > 0)
            {
                temp= a[i];
                a[i]= a[j];
                a[j]= temp;
            }
            if (strcmp(a[i].Ten, a[j].Ten) == 0)
            {
                if (strcmp(a[i].Ho, a[j].Ho) > 0)
                {
                    temp= a[i];
                    a[i]= a[j];
                    a[j]= temp;
                }
                
            }
            
}
void XoaSV(SinhVien a[], int *n)
{
    int k,i;
    printf("\nNhap so thu tu sinh vien can xoa: ");
    scanf("%d",&k);
    for ( i = k-1; i <*n-1; i++)
    {
        a[i]=a[i+1];
    }
    a[*n-1]={'\0'};   
    *n=*n-1;
}