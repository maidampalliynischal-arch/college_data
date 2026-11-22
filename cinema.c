#include <stdio.h>
int main(){
int arr[3][10];
int already[3][10];
int n, m, k;
int count = 30;
int price;
int now;
int flag;
    printf("-----------WELCOME TO KMIT THEATER------------\n");
    while(count > 0){
    printf("\nDo you want to book your seats?(enter 1 for yes or 0 for no): ");
    scanf("%d", &n);
    if(n==1){
        for(int row = 0;row < 3; row++){
            for(int column = 0;column < 11; column++){
                if(row == 2 && column != 5){
                    arr[row][column] = 'R';
                }
                else if(column == 5){
                    arr[row][column] = ' ';
                }
                else{
                    arr[row][column] = 'U';
                }
                printf("%c", arr[row][column]);
            }
            printf("\n");
        }
        printf("do you want to take reserved seats or normal seats enter 1 or 0:");
        scanf("%d", &now);
        if(now == 0){
            printf("How many seats do you want: ");
            scanf("%d", &m);
            if(m > 30 || m < 0){
                printf("Invalid number of seats");
            }
            printf("Enter the seats you want:");
            int row, column;
            for (int i = 0; i< m; i++){
                printf("row:");
                scanf("%d", &row);
                if(row > 3 || row <= 0){
                    printf("Invalid row");
                    flag = 100;
                }
                printf("column:");
                scanf("%d", &column);
                if(column > 10 || column <= 0){
                    printf("Invalid column");
                    flag = 100;
                } 
            }
            if(flag == 100){
                break;
            }
            price = 60 * m;
            printf("price: %d\n", price);
        }
        if(now == 1){
            printf("How many seats do you want: ");
            scanf("%d", &m);
            if(m > 10 || m < 0){
                printf("Invalid number of seats");
            }
            printf("Enter the seats you want:");
            int row, column;
            for (int i = 0; i< m; i++){
                printf("row:");
                scanf("%d", &row);
                if(row > 3 || row <= 0){
                    printf("Invalid row");
                    flag = 100;
                }
                printf("column:");
                scanf("%d", &column);
                if(column > 10 || column <= 0){
                    printf("Invalid column");
                    flag = 100;
                }
            }
            if(flag == 100){
                break;
            }
            price = 120 * m;
            printf("price: %d\n", price);
        }
        int id;
        printf("enter the id which is provided after payment: ");
        scanf("%d", &id);
        if(id == 267 || id == 346 || id == 567){
            printf("seat/s conformed\n");
            count-=m;
        }
        else{
            printf("Invalid id");
        }
        
    }
}
}