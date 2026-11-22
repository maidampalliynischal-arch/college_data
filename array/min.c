#include <stdio.h>
int main(void)
{
   int n;
   printf("number of values in an array:");
   scanf("%d", &n);
   float y[n];
   printf("values are ");
   for (int i = 0; i < n; i++)
   {
      scanf("%f", &y[i]);
   }
   float min = y[0];
   for (int i = 0; i<n;i++)
   {
      if (y[i] < min)
      {
         min = y[i];
      }
   }
   printf("min = %.2f", min);
}    
