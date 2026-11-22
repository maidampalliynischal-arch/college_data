#include <stdio.h>
int main(void)
{
    int y[5] = {1, 2, 3, 4, 5}, x = 0;
    for(int i = 0; i < 5; i++){
        x++;
    }
    printf("length: %d", x);
}