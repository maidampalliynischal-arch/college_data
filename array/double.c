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
      
         for (int j = 0, i = 0; j < n, i < n;j++, i++)
         {
            y[j] = y[i] * 2;
         }
      
      printf("{ ");
      for(int j = 0; j<n;j++){
         printf("%d ", y[j]);
      }
      printf("}");

   }