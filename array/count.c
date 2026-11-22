
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
      int p, count = 0;
      printf("enter a number: ");
      scanf("%d", &p);
      for (i = 0;i < n; i++){
            if (p == y[i])
            {
                  count++;
            }
      }
      printf("search %d - %d times", p, count);
}