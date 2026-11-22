#include <stdio.h>
int main()
{
    int x, y,z,w;
    int count = 0, current = 0;
    printf("enter a number: ");
    scanf("%d", &x);
    z = x;
    while(z>0){
        count++;
        z /= 10;
    }
    long long sq = (long long)x*x, p = 1;
    while(count > 0){
        w = sq%10;
        current = current + w*p;
        p *= 10;
        sq = sq/10;
        count--;
    }
       if (current == x)
        printf("the square of the number ends with itself; num: %d, its square: %lld\n", x, (long long)x * x);
    else
        printf("not automorphic\n");

    return 0;
}
