#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include<stdlib.h>
struct date
{
    int day, month, year;
};
struct node
{
    char name[100];
    date birth;
    int math, physic, language;
    struct node *next;
};
struct node *start = NULL;
struct node *create_cll(struct node *start, int *n)
{
    if (*n != -1)
    {
        printf("\n You have already created a list\n");
        getch();
        return start;
    }
    struct node *new_node, *ptr;
    char tempN[100];
    int d, m, y, mm, pm, lm;
    printf("\n Enter the number of students to enter data n= ");
    scanf("%d", &*n);
    for (int i = 0; i < *n; i++)
    {
        printf(" Enter data of student %d\n", i + 1);
        printf(" Name: ");
        fflush(stdin);
        gets(tempN);
        printf(" Date of birth (dd/mm/yyyy) : ");
        scanf("%d/%d/%d", &d, &m, &y);
        printf(" Math mark: ");
        scanf("%d", &mm);
        printf(" Physic mark: ");
        scanf("%d", &pm);
        printf(" Language mark: ");
        scanf("%d", &lm);
        new_node = (struct node *)malloc(sizeof(struct node));
        strcpy(new_node->name, tempN);
        new_node->birth.day = d;
        new_node->birth.month = m;
        new_node->birth.year = y;
        new_node->math = mm;
        new_node->physic = pm;
        new_node->language = lm;
        if (start == NULL)
        {
            new_node->next = new_node;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->next = start;
        }
    }
    printf("\n New list had created\n");
    getch();
    return start;
}
struct node *display(struct node *start, int n)
{
    if (n == -1)
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    if (n == 0)
    {
        printf("\n No student\n");
        getch();
        return start;
    }
    struct node *ptr;
    int i = 0;
    ptr = start;
    for (int i = 0; i < n; i++)
    {
        printf("%d. %s  |  %d/%d/%d  | math mark: %d | physic mark: %d | language mark: %d \n", i + 1, ptr->name, ptr->birth.day, ptr->birth.month, ptr->birth.year, ptr->math, ptr->physic, ptr->language);
        ptr = ptr->next;
    }
    getch();
    return start;
}
struct node *insert(struct node *start, int *n)
{
    if (*n == -1)
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    struct node *ptr, *new_node;
    char tempN[100];
    int d, m, y, mm, pm, lm;
    printf(" Enter data of student \n");
    printf(" Name: ");
    fflush(stdin);
    gets(tempN);
    printf(" Date of birth (dd/mm/yyyy) : ");
    scanf("%d/%d/%d", &d, &m, &y);
    printf(" Math mark: ");
    scanf("%d", &mm);
    printf(" Physic mark: ");
    scanf("%d", &pm);
    printf(" Language mark: ");
    scanf("%d", &lm);
    new_node = (struct node *)malloc(sizeof(struct node));
    strcpy(new_node->name, tempN);
    new_node->birth.day = d;
    new_node->birth.month = m;
    new_node->birth.year = y;
    new_node->math = mm;
    new_node->physic = pm;
    new_node->language = lm;
    if (n == 0)
    {
        new_node->next = new_node;
        start = new_node;
        *n = *n + 1;
    }
    else
    {
        ptr = start;
        while (ptr->next != start)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next = start;
        *n = *n + 1;
    }
    printf("\n New student has created\n");
    getch();
    return start;
}
struct node *count(struct node *start, int n)
{
    if (n == -1)
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    if (n == 0)
    {
        printf("\n No student\n");
        getch();
        return start;
    }
    struct node *ptr;
    int c, y = 0;
    ptr = start;
    printf("\n Enter year of birth : ");
    scanf("%d", &y);
    for (int i = 0; i < n; i++)
    {
        if (ptr->birth.year == y)
        {
            c++;
        }
        ptr = ptr->next;
    }
    printf("\n In %d there were %d students\n", y, c);
    getch();
    return start;
}
struct node *CheckName(struct node *start, int n)
{
    if (n == -1)
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    if (n == 0)
    {
        printf("\n No student\n");
        getch();
        return start;
    }
    struct node *ptr;
    char s[100];
    ptr = start;
    fflush(stdin);
    printf("\n Enter the name to check: ");
    gets(s);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s, ptr->name) == 0)
        {
            printf("\n Yes\n");
            getch();
            return start;
        }
        ptr = ptr->next;
    }
    printf("\n No\n");
    getch();
    return start;
}
struct node *delete_Name(struct node *&start, int *n)
{
    if (*n == -1) //chưa tạo list n=-1
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    if (*n == 0) //list ko có phần tử
    {
        printf("\n No student\n");
        getch();
        return start;
    }
    struct node *ptr;
    char s[100];
    int c = 0;
    printf("\n Enter the Name student after which the node has to deleted : ");
    fflush(stdin);
    gets(s);
    //cho nút vào vị trí bắt đầu
    ptr = start;
    for (int i = 0; i < *n; i++)
    {
        if (strcmp(ptr->next->name, s) == 0)
        {
            node *temp = ptr->next;
            ptr->next = temp->next;
            temp->next = NULL;
            free(temp);
            printf("\n Data student has been deleted\n");
            c++;
            if (n == 0)
            {
                return start;
            }
        }
        ptr = ptr->next;
    }
    *n = *n - c;
    if (c == 0)
    {
        printf("\n No student has name %s\n", s);
    }
    getch();
    return start;
}
struct node *biggest_average(struct node *start, int n)
{
    if (n == -1) //chưa tạo list n=-1
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    if (n == 0) //list ko có phần tử
    {
        printf("\n No student\n");
        getch();
        return start;
    }
    struct node *ptr;
    char nM[100];
    float aM;
    ptr = start;
    strcpy(nM, ptr->name);
    aM = (float)(ptr->math + ptr->language + ptr->physic) / 3;
    ptr = ptr->next;
    for (int i = 1; i < n; i++)
    {
        if (aM < ((float)(ptr->language + ptr->math + ptr->physic) / 3))
        {
            strcpy(nM, ptr->name);
            aM = (float)(ptr->math + ptr->language + ptr->physic) / 3;
        }
        ptr = ptr->next;
    }
    printf("\n The student has having the biggest average is %s with %.2f point\n", nM, aM);
    getch();
    return start;
}
struct node *math_mark(struct node *start, int n)
{
    if (n == -1) //chưa tạo list n=-1
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    if (n == 0) //list ko có phần tử
    {
        printf("\n No student\n");
        getch();
        return start;
    }
    int c = 0;
    struct node *ptr;
    ptr = start;
    for (int i = 0; i < n; i++)
    {
        if (ptr->math < 5)
        {
            printf("%d. %s  |  %d/%d/%d  | math mark: %d | physic mark: %d | language mark: %d \n", i + 1, ptr->name, ptr->birth.day, ptr->birth.month, ptr->birth.year, ptr->math, ptr->physic, ptr->language);
            c++;
        }
        ptr = ptr->next;
    }
    if (c==0)
    {
        printf("\n No one has math mark below 5\n");
    }
    
    getch();
    return start;
}
struct node *printlist(struct node *start, int n){
    if (n == -1) //chưa tạo list n=-1
    {
        printf("\n You need to create a list \n");
        getch();
        return start;
    }
    if (n == 0) //list ko có phần tử
    {
        printf("\n No student\n");
        getch();
        return start;
    }
    FILE *fptr;
    struct node *ptr;
    ptr=start;
    fptr = fopen("StudentList.txt","w");
    for (int i = 0; i < n; i++)
    {
        fprintf(fptr,"%d. %10s\t|  %2d/%2d/%4d  | math mark: %2d | physic mark: %2d | language mark: %2d \n", i + 1, ptr->name, ptr->birth.day, ptr->birth.month, ptr->birth.year, ptr->math, ptr->physic, ptr->language);
        ptr = ptr->next;
    }
    fclose(fptr);
    printf("\n File has created\n");
    getch();
    return start;
}
int main(int argc, char const *argv[])
{
    int check, n = -1;
    system("cls");
    do
    {
        printf("\n\n ***** MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Print out the student list");
        printf("\n 3: Add a new student to the list");
        printf("\n 4: Count the number of students in a given year of birth");
        printf("\n 5: Check name");
        printf("\n 6: Delete student data by name");
        printf("\n 7: Find the student having the biggest average ");
        printf("\n 8: Print the list of students whose math mark is less than 5");
        printf("\n 9: Print list to a file named \"StudentList.txt\"");
        printf("\n10: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &check);
        switch (check)
        {
        case 1:
            start = create_cll(start, &n);
            break;
        case 2:
            start = display(start, n);
            break;
        case 3:
            start = insert(start, &n);
            break;
        case 4:
            start = count(start, n);
            break;
        case 5:
            start = CheckName(start, n);
            break;
        case 6:
            start = delete_Name(start, &n);
            break;
        case 7:
            start = biggest_average(start, n);
            break;
        case 8:
            start = math_mark(start, n);
            break;
        case 9:
            start = printlist(start, n);
            break;
        default:
            break;
        }
    } while (check != 10);
    printf("\n Exit......\n");
    return 0;
}
