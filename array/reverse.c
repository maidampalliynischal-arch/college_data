#include <stdio.h>
int main(void)
{
      int n;
      printf("enter the no. of elements in your array: ");
      scanf("%d", &n);
      int y[n];
      printf("enter the values: ");
      for (int i = 0;i < n;i++){
         scanf("%d", &y[i]);
      }
      printf("[ ");
      for(int q = n-1; q >= 0;q--){
         printf("%d ", y[q]);
      }
      printf("]");
}