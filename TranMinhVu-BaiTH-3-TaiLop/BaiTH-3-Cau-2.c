#include<stdio.h>
#include<windows.h>
int main(int argc, char const *argv[])
{
    int i,j,m,n;
    printf("Nhap cac canh hinh chu nhat co kich thuoc (m x n)");
    printf("\nm= ");
    scanf("%d",&m);
    printf("\nn= ");
    scanf("%d",&n);
    system("cls");
    for ( i = 1; i <=n ; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
