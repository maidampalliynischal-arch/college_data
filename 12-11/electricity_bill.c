#include <stdio.h>

void calculateBill( int consumption){
    float bill = 0;
    if(consumption <= 100){
        bill = consumption*2.0f;
    }
    else if(consumption <= 200){
        bill = 100*2.0f + (consumption - 100.0)*3.0f;
    }
    else{
        bill = 100.0*2.0f + 100.0*3.0f + (consumption - 200.0)*5.0f;
    }
    printf("Electricity Bill: %.2f", bill);
}

int main(){
    int consumption;
    printf("enter the consumed number of units: ");
    scanf("%d", &consumption);
    if(consumption < 0){
        printf("units cannot be negative");
    }
    else if(consumption > 0){
        calculateBill(consumption);
    }
}