#include <stdio.h>
int main(void)
{

   int y[5];
   int count = 0;
   printf("give 5 numbers: ");
   for(int i = 0; i < 5; i++)
   {
      scanf("%d", &y[i]);
   }
   for (int i = 0;i < 5;i++)
   {
      if (y[i] % 2 == 0)
      {
         count++;
      }
   }
   printf("num of even values = %d", count);
}    
