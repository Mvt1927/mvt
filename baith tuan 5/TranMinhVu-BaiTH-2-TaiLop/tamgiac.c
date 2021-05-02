#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    printf("Nhap do cao n: ");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
    	for (j=i; j<n; j++)
    	{
    		printf(" ");
		}
		for (j=1;j <=(2*i-1);j++)
		{
			if (j%2==0)
			{
				printf(" ");
			}
			/*else
			{
				printf("*");
			}
			*/
			printf("*");
		}
		printf("\n");
	}
    return 0;
}
