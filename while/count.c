#include <stdio.h>
int main()
{
    int x, y;
    int odd = 0,even = 0;
    printf("enter a number: ");
    scanf("%d", &x);
    while (x>0){
        y = x % 10;
        if(y%2 == 0){
            even++;
        }
        else if(x%2 == 1){
            odd++;
        }
        x /= 10;
    }
    printf("number of even : %d\n", even);
    printf("number of odd : %d", odd);
}