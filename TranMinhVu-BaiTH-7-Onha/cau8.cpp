#include <stdio.h>
#include <stdlib.h>
#include <string.h>
bool WriteFileBinary();
bool ReadFileBinary(int **buff);
bool WriteFileText(int *buff);
void BubbleSort(int **buff);
#define MAX_LEN 100
int main(int argc, char const *argv[])
{
    int buff[MAX_LEN];
    int *pBuf = buff;
    if (!WriteFileBinary())
    {
        goto EXIT;
    }
    if (!ReadFileBinary(&pBuf))
    {
        goto EXIT;
    }
    BubbleSort(&pBuf);
    if (!WriteFileText(buff))
    {
        goto EXIT;
    }
    printf("\nSucessfull!!!");
EXIT:
    return 0;
}
bool WriteFileBinary()
{
    FILE *fp = NULL;
    int idx;
    int buff[MAX_LEN];
    fp = fopen("SONGUYEN.txt", "wb");
    if (!fp)
    {
        printf("\nError in opening file");
        return false;
    }
    for (idx = 0; idx < MAX_LEN; idx++)
    {
        buff[idx] = rand();
    }
    if (fwrite(buff, sizeof(buff), 1, fp) < 1)
    {
        printf("\nError in writing SONGUYEN.txt file");
        return false;
    }
    fclose(fp);
    return true;
}
bool ReadFileBinary(int **buff)
{
    FILE *fp = NULL;
    fp = fopen("SONGUYEN.txt", "rb");
    if (!fp)
    {
        printf("\nError in opening file");
        return false;
    }
    if (fread(*buff, MAX_LEN * sizeof(int), 1, fp) < 1)
    {
        printf("\nError in reading SONGUYEN.txt file");
        return false;
    }
    fclose(fp);
    return true;
}
bool WriteFileText(int *buff)
{
    FILE *fp = NULL;
    int idx;
    fp = fopen("KETQUA.txt", "w");
    if (!fp)
    {
        printf("\nError in opening file");
        return false;
    }
    for (idx = 0; idx < MAX_LEN; idx++)
    {
        fprintf(fp, "%5d\t", buff[idx]);
        if ((idx+1)%5==0)
        {
            fprintf(fp, "\n");
        }
        
    }
    fclose(fp);
    return true;
}
void BubbleSort(int **buff)
{
    int idx, idx1;
    int temp;
    for (idx = 0; idx < MAX_LEN - 1; idx++)
    {
        for (idx1 = idx + 1; idx1 < MAX_LEN; idx1++)
        {
            if ((*buff)[idx] > (*buff)[idx1])
            {
                temp = (*buff)[idx];
                (*buff)[idx] = (*buff)[idx1];
                (*buff)[idx1] = temp;
            }
        }
    }
}