#include <stdio.h>
int main(void)
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    int y, count = 0;
    while(x != 0)
    {
        x/= 10;
        count++;
    }
    printf("no. of digits: %d", count);

}