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
   //int y[5] = {10,20,30,40,50};
   int sum = 0;
   for (i = 0; i <5;i++)
   {
    if (i>=n)
    {
        break;
    }
    sum = sum + y[i];
   }   
    printf("sum = %d",sum);
}    

