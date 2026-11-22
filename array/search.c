#include <stdio.h>
int main(void)
{
   int n;
   printf("no. of elements in an array: ");
   scanf("%d", &n);
   int y[n];
   printf("your integers in the array: ");
   for(int i = 0;i < n;i++)
   {
      scanf("%d", &y[i]);
   }
      int k;
      printf("enter a no.: ");
      scanf("%d", &k);
      for(int i = 0;i < n; i++)
      {
         if(y[i]==k){
            printf("the no.%d found", k);
         }
      }
}  
