#include <stdio.h>
int main(void)
{

   int i=0,y[5] = {10,20,30,40,50};
   float sum = 0, avg;
   for (i = 0;i<5;i++)
   {
      sum = sum + y[i];
   }
   avg = sum/i;
   printf("avg = %.2f", avg);
}    
