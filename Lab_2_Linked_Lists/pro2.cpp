#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <conio.h>
struct node
{
    int num;
    int coef;
    struct node *next;
};
struct node *poly1,*poly2,*poly3,*poly4;
class add{
    public:
        add(){poly1=poly2=poly3=poly4=NULL;}
        void addpoly(); 
        void display(struct node *start);
};
void add::addpoly(){
    int i,a1,b;
    node *new_poly=NULL,*ptr=NULL;
    printf("\n Enter highest power for x: ");
    scanf("%d", &a1);
    int a=a1;
    printf("\nFirst Polynomial\n");
    for (int i = a1; i >=0; i--)
    {
        new_poly=new node;
        new_poly->num=a1;
        printf("\n The degree: %d", i);
        printf(" The Coefficient: ");
        scanf("%d", &b);
        new_poly->coef = b;
        new_poly->next=NULL;
        if (poly1 == NULL)
        {
            poly1 = new_poly;
        }
        else
        {
            ptr->next=new_poly;
        }
        ptr=new_poly;
    }
    //poly 2
    printf("\nSecond Polynomial\n");
    ptr=NULL;
    for (int i = a1; i >=0; i--)
    {
        new_poly= new node;
        new_poly->num= a1;
        printf("\n The degree: %d", i);
        printf(" The Coefficient: ");
        scanf("%d", &b);
        new_poly->coef = b;
        new_poly->next=NULL;
        if (poly2 == NULL)
        {
            poly2 = new_poly;
        }
        else
        {
            ptr->next=new_poly;
        }
        ptr=new_poly;
    }
    //(+)
    node *p1 = poly1, *p2 = poly2;
    ptr = NULL;
    while (p1 != NULL && p2 != NULL) {
        if (p1->num == p2->num) {
            new_poly = new node;
            new_poly->num = a1--;
            new_poly->coef = p1->coef + p2->coef;
            new_poly->next = NULL;
            if (poly3 == NULL)
                poly3 = new_poly;
            else
                ptr->next = new_poly;
            ptr = new_poly;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
   //(-) 
   node *p3 = poly1, *p4 = poly2;
    ptr = NULL;
    while (p3 != NULL && p4 != NULL) {
        if (p3->num == p4->num) {
            new_poly = new node;
            new_poly->num = a--;
            new_poly->coef = p3->coef - p4->coef;
            new_poly->next = NULL;
            if (poly4 == NULL)
                poly4 = new_poly;
            else
                ptr->next = new_poly;
            ptr = new_poly;
        }
        p3 = p3->next;
        p4 = p4->next;
    }

}
void add::display(struct node *start){
    struct node * ptr = start;
    printf("\n\nAnswer after addition is : ");
    if (ptr->coef != 0)
        if (ptr->num == 0)
            printf(" %d", ptr->coef);
        else if (ptr->num == 1)
            if (ptr->coef == 1)
                printf(" x");
            else 
                printf(" %dx", ptr->coef);
        else if (ptr->coef == 1)
            printf(" x^%d", ptr->num);
        else
            printf(" %dx^%d", ptr->coef, ptr->num);
    ptr = ptr->next;
    while (ptr != NULL) {
         if (ptr->coef != 0)
            if (ptr->num == 0)
                printf(" + %d", ptr->coef);
            else if (ptr->num == 1)
                if (ptr->coef == 1)
                    printf(" + x");
                else
                    printf(" + %dx", ptr->coef);
            else if (ptr->coef == 1)
                printf(" + x^%d", ptr->num);
            else
                printf(" + %dx^%d", ptr->coef, ptr->num);
        ptr = ptr->next;
    }
    getch();
}
/*struct node *start = NULL;
struct node *create_poly(struct node *start)
{
    struct node *new_poly, *ptr;
    int a, b;
    printf("\n The max degree in polynomial: ");
    scanf("%d", &a);
    for (int i = a; i >= 0; i--)
    {
        printf("\n The degree: %d", i);
        printf(" The Coefficient: ");
        scanf("%d", &b);
        new_poly = (struct node *)malloc(sizeof(struct node));
        new_poly->num = i;
        new_poly->coef = b;
        if (start == NULL)
        {
            new_poly->next = new_poly;
            start = new_poly;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = new_poly;
            new_poly->next = start;
        }
    }

    return start;
}
struct node *print(struct node *start)
{
    struct node *ptr;
    ptr = start;
    if (ptr->coef != 0)
        if (ptr->num == 0)
            printf(" %d", ptr->coef);
        else if (ptr->num == 1)
            if (ptr->coef == 1)
                printf(" x");
            else
                printf(" %dx", ptr->coef);
        else if (ptr->coef == 1)
            printf(" x^%d", ptr->num);
        else
            printf(" %dx^%d", ptr->coef, ptr->num);
    ptr = ptr->next;
    while (ptr != start)
    {
        if (ptr->coef != 0)
            if (ptr->num == 0)
                printf(" + %d", ptr->coef);
            else if (ptr->num == 1)
                if (ptr->coef == 1)
                    printf(" + x");
                else
                    printf(" + %dx", ptr->coef);
            else if (ptr->coef == 1)
                printf(" + x^%d", ptr->num);
            else
                printf(" + %dx^%d", ptr->coef, ptr->num);
        ptr = ptr->next;
    }
    getch();
    return start;
}*/
/*struct node *second_poly(struct node *start){
    printf("\n The second polynomial: ");
    struct node *ptr;
    struct node *p= new node;
    int a, b;
    printf("\n The max degree in polynomial: ");
    scanf("%d", &a);
    for (int i = a; i >= 0; i--)
    {
        printf("\n The degree: %d", i);
        printf(" The Coefficient: ");
        scanf("%d", &b);
        p = (struct node *)malloc(sizeof(struct node));
        p->num = i;
        p->coef = b;
        if (start == NULL)
        {
            p->next = p;
            start = p;
        }
        else
        {
            ptr = start;
            while (ptr->next != start)
                ptr = ptr->next;
            ptr->next = p;
            p->next = start;
        }
    }

    return start;
}*/
int main(int argc, char const *argv[])
{
    /*start = create_poly(start);
    start = print(start);
    start = second_poly(start);*/
    add obj;
    obj.addpoly();
    obj.display(poly3);
    obj.display(poly4);
    return 0;
}
 