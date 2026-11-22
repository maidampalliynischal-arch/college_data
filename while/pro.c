#include <stdio.h>
int main()
{
    int x, y,z = 1;
    int current = 0;
    printf("enter a number: ");
    scanf("%d", &x);
    while(x>0){
        y = x%10;
        z = z * y;
        x /= 10;
    }
    printf("product of digits :%d", z);
}