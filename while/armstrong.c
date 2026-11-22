#include <stdio.h>
#include <math.h>
int main()
{
    int x, y,z = 0;
    int current, count = 0;
    double result;
    printf("enter a number: ");
    scanf("%d", &x);
    current = x;
    while(x>0){
        y = x%10;
        count++;
        x /= 10;
    }
    x = current;
    while(x>0){
        y = x%10;
        result = pow(y, count);
        z = z + (int)result;
        x /= 10;
    }
    if (z == current){
        printf("its an armstrong number");
    }
    else{
        printf("non armstrong number");
    }

    return 0;
}