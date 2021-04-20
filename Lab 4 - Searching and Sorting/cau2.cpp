// +> The program was written by Mvt1927
// +> www.facebook.com/Mvt1927/
#include <stdio.h>
#include <string.h>
struct STUDENT
{
    char name[30];
    char classn[10];
    float mMath;
    float mPhysical;
    float avg;
};
void add(STUDENT sv[], int *n)
{
    fflush(stdin);
    printf("Name= ");
    gets(sv[*n].name);
    printf("Class= ");
    scanf("%s", &sv[*n].classn);
    printf("Math= ");
    scanf("%f", &sv[*n].mMath);
    printf("Phyical= ");
    scanf("%f", &sv[*n].mPhysical);
    sv[*n].avg = (sv[*n].mMath + sv[*n].mPhysical) / 2;
    *n = *n + 1;
}
void swap(STUDENT &a, STUDENT &b)
{
    char tempn[30], tempclass[10];
    float tempM, tempP, tempA;
    strcpy(tempn, a.name);
    strcpy(tempclass, a.classn);
    tempM = a.mMath;
    tempP = a.mPhysical;
    tempA = a.avg;

    strcpy(a.name, b.name);
    strcpy(a.classn, b.classn);
    a.mMath = b.mMath;
    a.mPhysical = b.mPhysical;
    a.avg = b.avg;

    strcpy(b.name, tempn);
    strcpy(b.classn, tempclass);
    b.mMath = tempM;
    b.mPhysical = tempP;
    b.avg = tempA;
}
int find(STUDENT sv[], int n)
{
    char tname[30];
    printf("Name= ");
    fflush(stdin);
    gets(tname);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(sv[i].name, tname) == 0)
        {
            printf("%d. %s\t| %s\t| %f\t| %f\t| %f\n", i + 1, sv[i].name, sv[i].classn, sv[i].mMath, sv[i].mPhysical, sv[i].avg);
            return i;
        }
    }
    printf("There is no student named %s\n", tname);
    return -1;
}
void display(STUDENT sv[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d.\t%s\t| %s\t| %f\t| %f\t| %f\n", i + 1, sv[i].name, sv[i].classn, sv[i].mMath, sv[i].mPhysical, sv[i].avg);
    }
}
void xx(STUDENT sv[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sv[i].avg < sv[j].avg)
            {
                swap(sv[i], sv[j]);
            }
        }
    }
}
void menu()
{
    printf("\n1. Add a new student\n");
    printf("2. Search a student by name\n");
    printf("3. Sort the list in descending order based on avg.\n");
    printf("4. Exit\n");
    printf("\tEnter your selection: ");
}
int main(int argc, char const *argv[])
{
    STUDENT sv[100];
    int n = 0, choie = 0;
    do
    {
        menu();
        scanf("%d", &choie);
        switch (choie)
        {
        case 1:
            add(sv, &n);
            break;
        case 2:
            if (n==0)
            {
                printf("\nno student\n");
                break;
            }
            
            find(sv, n);
            break;
        case 3:
        if (n==0)
            {
                printf("\nno student\n");
                break;
            }
            xx(sv, n);
            display(sv, n);
            break;
        default:
            break;
        }
    } while (choie != 4);

    return 0;
}
