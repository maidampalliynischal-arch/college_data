/*
*  
*  *  
*  *  *  
*  *  *  *  
*  *  *  *  *
*  *  *  *  
*  *  *  
*  *  
*  
*/


#include <stdio.h>
int main(void)
{
    for (int x = 1; x<5;x++)
    {
        for(int s = 5-x;s>0;s--){
            printf("");
        }
        for (int y = 0; y<x;y++){
            printf("*  ");
        }
        printf("\n");
    }
    printf("*  *  *  *  *");
    printf("\n");
    for (int a = 4;a>0;a--){
        for (int b = 4; b>0;b--){
            printf("");
        }
        for (int c=0;c<a;c++){
            printf("*  ");
        }
        printf("\n");
    }
}