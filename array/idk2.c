#include <stdio.h>
int main()
{
    int x = 5;
    int i = 0;
    while(x > 0){
        for(int j = 0; j <= x - i;i++,j++){
            printf(" ");
        }
        
        for(i = 0;i < x;i++){
            printf("* ");
        }
    
        printf("\n");
        x--;
    }
}