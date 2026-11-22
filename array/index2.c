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
      printf("{ ");
      for(i = 0; i < n;i++)
      {
         if(i == 2){
            printf("%d ", y[i]);
         }
         
      }
      printf("}");

   }