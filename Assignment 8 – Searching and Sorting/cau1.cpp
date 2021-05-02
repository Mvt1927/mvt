// +> The program was written by Mvt1927
// +> www.facebook.com/Mvt1927/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <Windows.h>
void random(int a[], int n)
{
    srand((int)time(0));
    for (int i = 0; i < n; ++i)
    {
        a[i] = rand();
        while (a[i] > 10000 || a[i] == 0)
        {
            a[i] = rand();
        }
    }
}
void backup(int a[], int b[], int n)
{
    for (int i = 0; i < n; i++)
        b[i] = a[i];
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d\t;", a[i]);
        if ((i + 1) % 20 == 0)
        {
            printf("\n");
        }
    }
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
double Bubble(int a[], int n)
{
    clock_t start, end;
    double time_use;
    start = clock();

    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; j > i; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    return time_use;
}
double Insertion(int a[], int n)
{
    int pos, x;
    clock_t start, end;
    double time_use;
    start = clock();

    for (int i = 1; i < n; i++)
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
double Selection(int a[], int n)
{
    int min;
    clock_t start, end;
    double time_use;
    start = clock();
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        if (min != i)
            swap(a[min], a[i]);
    }
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    return time_use;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int left = low;
    int right = high - 1;
    while (true)
    {
        while (left <= right && arr[left] < pivot)
            left++;
        while (right >= left && arr[right] > pivot)
            right--;
        if (left >= right)
            break;
        swap(&arr[left], &arr[right]);
        left++;
        right--;
    }
    swap(&arr[left], &arr[high]);
    return left;
}
void quickSort(int arr[], int low, int high)
{
    clock_t start, end;
    double time_use;
    start = clock();
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
    end = clock();
    time_use = (double)(end - start) / CLOCKS_PER_SEC;
    return time_use;
}

void menu()
{
    printf("1. Insertion sort\n");
    printf("2. Selection sort\n");
    printf("3. Bubble sort\n");
    printf("4. Quick Sort\n");
    printf("5. Merge Sort\n");
    printf("6. Exit\n");
    printf("\tEnter your selection: ");
}

int main(int argc, char const *argv[])
{
    int a[1000];
    int b[1000];
    int n = 0;
    int choie = 0;
    int tempi;
    printf("N= ");
    scanf("%d", &n);
    random(a, n);
    backup(a, b, n);
    do
    {
        menu();
        scanf("%d", &choie);
        switch (choie)
        {
        case 1:
            backup(b, a, n);
            Insertion(a, n) break;
        case 2:
            backup(b, a, n);
            Selection(a, n);
            break;
        case 3:
            backup(b, a, n);
            Bubble(a, n);
            break;
        case 4:
            backup(b, a, n);
            break;
        case 5:
            backup(b, a, n);
            break;
        default:
            break;
        }
    } while (choie != 6);

    return 0;
}
