#include <stdio.h>
int main(void)
{

   int n;
   printf("number of values in an array: ");
   scanf("%d", &n);
   printf("give %d numbers: ", n);
   int y[n];
   int i = 0;
   for(i = 0; i < n;i++)
   {
      scanf("%d", &y[i]);
   }
   int max = y[0];
   for (i = 0; i<n;i++)
   {
      if (max < y[i])
      {
         max = y[i];
      }
   }
   printf("max = %d\n", max);
}    
