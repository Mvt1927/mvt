#include<stdio.h>
#include<math.h>
#include<windows.h>
/*Viết chương trình cho phép nhập n từ bàn phím (nếu n <= 0 thì bắt
nhập lại) . Tính tổng s = 1^2 + 2^2+.... + n^2. */
int main(int argc, char const *argv[])
{
    int s,n;
    s=0;
    do
    {
        printf("Nhap n= ");
        scanf("%d",&n);
        if (n<=0)
        {
            printf("Nhap sai moi nhap lai \n ");
        }
        
    } while (n<=0);
    system("cls");
    for (int i = 1; i <= n; i++)
    {
        s=s+i*i;
    }
    printf("s= ");
    for (int i = 1; i <n ; i++)
    {
        printf("%d^2 + ",i);
    }
    printf("%d^2 ",n);
    printf("= %d",s);

    return 0;
}
