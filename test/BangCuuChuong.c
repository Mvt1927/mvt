#include<stdio.h>
#include<windows.h>
int main(int argc, char const *argv[])
{
    system("cls");
    int i,j;
    printf("\n					+----+----+----+----+----+----+----+----+----+----+\n");
    for (i=0; i<=9;i++)
    {
    	if (i==0)
        {
            printf("					|  X ");
        }
        else
        {
            printf("| %2d ",i);
        }       
	}
	printf("|\n");
    for (i = 1; i <= 9 ; i++)
    {
		printf("					+----+----+----+----+----+----+----+----+----+----+\n");
        for ( j = 1 ; j <=9; j++)
        {   
			if (j==1)
			{
				printf("					| %2d ",i);
			}
            printf("| %2d ",i*j);
        }
        printf("|\n");
        
    }
    printf("					+----+----+----+----+----+----+----+----+----+----+\n");
    return 0;
}
