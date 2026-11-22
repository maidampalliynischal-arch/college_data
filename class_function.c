#include <stdio.h>

void my_function(int a, int b, int c) {
    if(a > b && a > c) {
        printf("a is the largest number: %d\n", a);
    } else if(b > a && b > c) {
        printf("b is the largest number: %d\n", b);
    } else {
        printf("c is the largest number: %d\n", c);
    }

}

int main(){
    my_function(5, 10, 15);
    my_function(20, 3, 7);
    my_function(4, 60, 33);
    my_function(12, 11, 113);
    return 0;
}

void sum(int x, int y, int z){
    printf("the sum of the values %d", x+y+z);
}
void subtract(int p, int q){
    printf("\nthe difference: %d", p - q);
}
void now(char name[100]){
    printf("\nHello! %s", name);
}
void bye(){
    printf("\nBhas ho gaya nikal, pehili fursat pe nikal");
}
int main(){
    int x, y, z;
    printf("\nenter three numbers to add: ");
    scanf("%d %d %d", &x, &y, &z);
    sum(x, y, z);
    int a, b;
    printf("\ngive two numbers to subtract: ");
    scanf("%d %d", &a, &b);
    subtract(a, b);
    char name[100];
    printf("\nenter your name: ");
    scanf(" %99[^\n]", name);  
    now(name);
    bye();
    
}










