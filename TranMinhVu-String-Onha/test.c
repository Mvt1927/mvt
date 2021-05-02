#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = "111112222hhggv";//'1'
    int count[121] = {0};
    int i;
    for(i = 0; i < 121; ++i);
        count[s[i]]++;
    for(i = 0; i < 121; ++i)
        if(count[i])
            printf("%c %d\n", i, count[i]);
    return 0;
}