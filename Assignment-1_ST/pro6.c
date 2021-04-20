#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int a;
    char s[1000]="";
    printf("Enter the number: ");
    scanf("%d",&a);
    while (a >= 1000) {
        strcat(s,"M");
        a -= 1000;        }
    while (a >= 900) {
        strcat(s,"CM");
        a -= 900;
    }
    while (a >= 500) {
        strcat(s,"D");
        a -= 500;
    }
    while (a >= 400) {
        strcat(s,"CD");
        a -= 400;
    }
    while (a >= 100) {
        strcat(s,"C");
        a -= 100;
    }
    while (a >= 90) {
        strcat(s,"XC");
        a -= 90;
    }
    while (a >= 50) {
        strcat(s,"L");
        a -= 50;
    }
    while (a >= 40) {
        strcat(s,"XL");
        a -= 40;
    }
    while (a >= 10) {
        strcat(s,"X");
        a -= 10;
    }
    while (a >= 9) {
        strcat(s,"IX");
        a -= 9;
    }
    while (a >= 5) {
        strcat(s,"V");
        a -= 5;
    }
    while (a >= 4) {
        strcat(s,"IV");
        a -= 4;
    }
    while (a >= 1) {
        strcat(s,"I");
        a -= 1;
    }    
    printf("Roman number is be: %s",s);
}
