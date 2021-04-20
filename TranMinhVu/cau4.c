#include<stdio.h>
#include<windows.h>
int main(int argc, char const *argv[])
{
    int x,n,path,a[50],i,j;
    boolean check = TRUE;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("nhap x: ");
    scanf("%d",&x);
    path=n;
    i=0;
    while (path!=0)
    {
       i++;
       a[i]=path%10;
       path=path/10; 
    }
    for ( j = i; j >= 1; j--)
    {
        if (a[j]==x)
        {
            printf("chu so %d o vi tri thu %d trong %d. \n",x,i-j+1,n);
            check=FALSE;
        }
        
    }
    if (check==TRUE)
    {
        printf("khong tim thay vi tri chu so %d trong %d .",x,n);
    }
    
    
    return 0;
}
