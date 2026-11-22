#include <stdio.h>

int countDigits(int x){
    int count = 0;
    while(x != 0){
        count++;
        x = x / 10;
    }
    return count;
}

int sumDigits(int x){
    int sum = 0;
    while(x != 0){
        sum += x%10;
        x = x / 10;
    }
    return sum;
}

int reverseNumber(int x){
    int reverse = 0;
    while(x != 0){
        reverse = reverse*10 + x%10;
        x /= 10;
    }
    return reverse;
}

int main(){
    int x;
    printf("enter a no.: ");
    scanf("%d", &x);
    printf("no. of digits : %d\n",  countDigits(x) );
    printf("sum of digits: %d\n", sumDigits(x));
    printf("reverse of number: %d\n", reverseNumber(x));
    return 0;
}