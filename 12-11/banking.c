#include <stdio.h>
int withdraw(int balance){
    int withdraw;
    printf("\nenter the amount to be withdrawed: ");
    scanf("%d", &withdraw);
    balance -= withdraw;
    printf("\ntransactiion successful!!");
    printf("\nyour balance: %d", balance);

}
int deposit(int balance){
    int deposit;
    printf("\nenter the amount to be deposited: ");
    scanf("%d", &deposit);
    balance += deposit;
    printf("\ntransactiion successful!!");
    printf("\nyour balance: %d", balance);
}
int check_balance(int balance){
    printf("your current balance : %d", balance);
}
int main(){
    int x;
    int balance = 0;
    while(1){
        int balance;
        printf("\nenter the number of your need:");
        printf("\n 1. Deposit\n 2. Withdraw\n 3. Check Balance\n 4. Exit\n");
        scanf("\n%d", &x);
        if( x == 1){
            printf("\nenter your balance: ");
            scanf("%d", &balance);

            deposit(balance);
        }
        else if(x == 2){
            printf("\nenter your balance: ");
            scanf("%d", &balance);
        
            withdraw(balance);
        }
        else if(x == 3){
            check_balance(balance);
        }
        else if(x == 4){
            printf("Thanks to visit");
        }
    }
    return 0;
        
}