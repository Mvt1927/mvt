#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
for (int i=1;i<=n-1;i++)
{
   for(int j=n-i;j>0;j--) 
   printf(" ");
   for (int k=1;k<=2*i-1;k++)
   {
      if (k==2*i-1|| k==1) 
      printf("*");
      else printf(" ");
   }
   printf("\n");
}
for (int i = 1; i <=n; i++)
{
  printf("* ");
}

    return 0;
}