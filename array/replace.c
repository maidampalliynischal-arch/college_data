#include <stdio.h>
int main(void)
{
      int n,count = 0;
      printf("enter the no. of elements in your array: ");
      scanf("%d", &n);
      int y[n], i;
      printf("enter the values: ");
      for (i = 0;i < n;i++){
         scanf("%d", &y[i]);
      }
      for(i = 0; i < n;i++)
      {
         if(y[i] < 0){
            y[i] = 0;
         }
         
      }
      printf("{ ");
      for(i = 0;i<n;i++){
         printf("%d ",y[i]);
      }
      printf("}");
   }