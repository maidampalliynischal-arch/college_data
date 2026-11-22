#include <stdio.h>
int main(void)
{
   int n;
   printf("enter the no. of elements in your array: ");
   scanf("%d", &n);
   int y[n], i;
   printf("enter the values: ");     
   for (i = 0;i < n;i++){
      scanf("%d", &y[i]);
   }
   int k, l, m;
   int arleady = 0, count = 0;
   for (k = 0;k < n;k++){
      count = 0;
      int already = 0;
      for (l = 0;l < k;l++)
      {
         if(y[k] == y[l])
         {
            already = 1;
            break;
         }
      }

         if (already == 1){
            continue;
         }
         for (l = 0;l < n;l++)
      {
         if(y[k] == y[l])
         {
            count++;
         }
      }  
   if (count > 1)
   {
      printf("the number %d has %d dublicates\n", y[k], count - 1);
   }
   }
}