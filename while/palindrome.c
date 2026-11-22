#include <stdio.h>
int main()
{
    int x, y;
    int current = 0;
    printf("enter a number: ");
    scanf("%d", &x);
    y = x;
    while(x > 0)
    {
        int z;
        z = x%10;
        current = current*10 + z;
        x/= 10;
    }
    while(current > 0){
        if(current == y)
        {
            printf("palindrome");
        }
        else{
            printf("not a palindrome");
        }
        return 0;
    }
}