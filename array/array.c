#include <stdio.h>
int main(void)
/*{

   int y[5] = {10,20,30,40,50};
   for (int i = 0; i<5;i++)
   {
      printf("%d\n",y[i]);
   }
}*/    
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
   for(i = 0; i < n; i++){
      printf("%d ", y[i]);
   }
   printf("}");
}