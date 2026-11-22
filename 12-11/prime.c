#include <stdio.h>
void prime(int x){
    int count = 0;
    for(int i = 1; i < x; i++){ 
        if(x % i == 0){
            count++;
        }
    }
    if (count == 1){
        printf("prime\n");
    }
    else{
        printf("not a prime\n");
    }
    
}
void primes(int x){
    for(int i = 2;i <= x;i++){
        int count = 0;        
        for(int j = 1;j < i;j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 1){
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main(void){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("\n");
    prime(x);
    printf("the prime numbers between 1 and %d are: ", x);
    primes(x);
    return 0;
}