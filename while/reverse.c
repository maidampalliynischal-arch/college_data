#include <stdio.h>
int main(void)
{
    int x, y;
    printf("enter a number: ");
    scanf("%d", &x);
    while(x > 0){
        y = x%10;
        printf("%d", y);
        x /= 10;
        }
}