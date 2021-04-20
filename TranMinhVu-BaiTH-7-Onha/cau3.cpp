#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX_LENTH 100
int main(int argc, char const *argv[])
{
    FILE *fp = NULL;
    int i;
    int arr[MAX_LENTH];
    fp = fopen("output.txt", "w");
    if (!fp)
    {
        printf("\nError in opening file");
    }
    else
    {
        for (i = 0; i < MAX_LENTH; i++)
        {
            arr[i] = rand();
            fprintf(fp, "%5d\t", arr[i]);
            if ((i+1)%5==0)
            {
                fprintf(fp, "\n");
            }
            
        }
        printf("\nFile is created successfully");
        fclose(fp);
    }
    return 0;
}
