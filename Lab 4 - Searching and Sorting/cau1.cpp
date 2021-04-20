// +> The program was written by Mvt1927
// +> www.facebook.com/Mvt1927/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
void random(int a[])
{
    srand((int)time(0));
    for (int i = 0; i < 1000; ++i)
    {
        a[i] = rand();
        while (a[i] > 10000 || a[i] == 0)
        {
            a[i] = rand();
        }
    }
}
void backup(int a[], int b[])
{
    for (int i = 0; i < 1000; i++)
        b[i] = a[i];
}
void display(int a[])
{
    for (int i = 0; i < 1000; i++)
    {
        printf(" %d\t;", a[i]);
        if ((i + 1) % 20 == 0)
        {
            printf("\n");
        }
    }
}
void menu()
{
    printf("\n1. Input and ouput data of the array\n");
    printf("2. Sort the array by using all sorting algorithms that you have studied\n");
    printf("3. Compare the execution time of the sorting algorithms and write the result to a file named \"SortingTime.txt\"\n");
    printf("4. Search for a given element x from the array using linear search technique\n");
    printf("5. Search for a given element x from the array using binary search technique\n");
    printf("6. Exit\n");
    printf("\tEnter your selection: ");
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
double Interchange(int a[])
{
    clock_t start, end;
    double time_use;
    start = clock();

    for (int i = 0; i < 999; i++)
    {
        for (int j = i + 1; j < 1000; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    return time_use;
}
double Bubble(int a[])
{
    clock_t start, end;
    double time_use;
    start = clock();

    for (int i = 0; i < 999; i++)
        for (int j = 999; j > i; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    return time_use;
}
double Insertion(int a[])
{
    int pos, x;
    clock_t start, end;
    double time_use;
    start = clock();

    for (int i = 1; i < 1000; i++)
    {
        x = a[i];
        pos = i;
        while (pos > 0 && x < a[pos - 1])
        {
            a[pos] = a[pos - 1];
            pos--;
        }
        a[pos] = x;
    }
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    return time_use;
}
double Selection(int a[])
{
    int min;
    clock_t start, end;
    double time_use;
    start = clock();

    for (int i = 0; i < 999; i++)
    {
        min = i;
        for (int j = i + 1; j < 1000; j++)
            if (a[j] < a[min])
                min = j;
        if (min != i)
            swap(a[min], a[i]);
    }
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    return time_use;
}
void linear(int a[])
{
    printf("X= ");
    int x, check = 0;
    scanf("%d", &x);
    for (int i = 0; i < 1000; i++)
    {
        if (a[i] == x)
        {
            printf("A[%d] = %d\n", i + 1, a[i]);
            check = 1;
        }
    }
    if (check == 0)
    {
        printf("%d value not found\n");
    }
}
int binarySearch(int a[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2;
    if (a[mid] == x)
      return mid;
    if (a[mid] > x)
      return binarySearch(a, l, mid - 1, x);
    return binarySearch(a, mid + 1, r, x);
  }
  return -1;
}
void menu2()
{
    printf("\n1. Interchange sort\n");
    printf("2. Bubble sort\n");
    printf("3. Insertion sort\n");
    printf("4. Selection sort\n");
    printf("5. Exit\n");
    printf("\tEnter your selection: ");
}
int main2(int a[], int b[])
{
    int choie;
    do
    {
        menu2();
        scanf("%d", &choie);
        switch (choie)
        {
        case 1:
            backup(b, a);
            Interchange(a);
            display(a);
            getch();
            break;
        case 2:
            backup(b, a);
            Bubble(a);
            display(a);
            getch();
            break;
        case 3:
            backup(b, a);
            Insertion(a);
            display(a);
            getch();
            break;
        case 4:
            backup(b, a);
            Selection(a);
            display(a);
            getch();
            break;
        default:
            break;
        }
    } while (choie != 5);
    return 0;
}
void time(int a[], int b[])
{
    FILE *fptr;
    fptr = fopen("SortingTime.txt", "w");
    backup(b, a);
    fprintf(fptr, "InterchangeSort take %.5f seconds\n", Interchange(a));
    backup(b, a);
    fprintf(fptr, "BubbleSort take %.5f seconds\n", Bubble(a));
    backup(b, a);
    fprintf(fptr, "InsertionSort take %.5f seconds\n", Insertion(a));
    backup(b, a);
    fprintf(fptr, "SelectionSort take %.5f seconds\n", Selection(a));
    fclose(fptr);
    printf("\n File has created\n");
    getch();
}
int main(int argc, char const *argv[])
{
    int a[1000];
    int b[1000];
    int choie=0;
    int tempi;
    do
    {
        menu();
        scanf("%d", &choie);
        switch (choie)
        {
        case 1:
            random(a);
            backup(a, b);
            display(a);
            getch();
            break;
        case 2:
            main2(a, b);
            break;
        case 3:
            time(a, b);
            break;
        case 4:
            linear(a);
            break;
        case 5:
            int x;
            Insertion(a);
            printf("X= ");
            scanf("%d",&x);
            tempi = binarySearch(a,0,999,x);
            if (tempi==-1)
            {
                printf("%d value not found\n",x);
                break;
            }
            printf("A[%d] = %d\n", tempi + 1, a[tempi]);    
            break;
        default:
            break;
        }
    } while (choie != 6);

    return 0;
}
