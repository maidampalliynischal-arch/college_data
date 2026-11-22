#include <stdio.h>
int main()
{
    int x, y,z=0;
    printf("enter a number: ");
    scanf("%d", &x);
    while (x>0){
        y = x % 10;
        if(z<y){
            z=y;
        }
        x /= 10;
    }
    printf("max digit : %d", z);
}