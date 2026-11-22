#include <stdio.h>
int main()
{
    int x, y,z;
    printf("enter a number: ");
    scanf("%d", &x);
    while (x>9){
        z = 0;
        while(x>0)
        {
            y = x % 10;
            z += y;
            x /= 10;
        }
        x = z;
    }
    printf("final answer : %d", z);
}

