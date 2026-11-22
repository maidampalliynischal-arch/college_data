#include <stdio.h>
int main(void)
{
   printf("give five numbers: ");
   int y[5];
   for (int i = 0; i < 5; i++)
   {
      scanf("%d", &y[i]);
   }
   int count = 0;
   for (int i = 0;i < 5;i++)
   {
      if (y[i] % 2 == 1)
      {
         count++;
      }
   }
   printf("num of odd values = %d", count);
}    
