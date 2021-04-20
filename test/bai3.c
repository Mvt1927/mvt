#include <stdio.h>
int main(int argc, char const *argv[])
{
    int s1,giayT1;
    s1=156623;
    giayT1 = (s1/10000*3600)+(((s1%10000)/100)*60)+(s1%100);
    printf("%d",giayT1);
    return 0;
}
