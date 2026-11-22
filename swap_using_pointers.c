#include <stdio.h>
void m(int *p, int *q){
    *p = q;
    *q = p;

}
void main(){
    int x = 10, y = 20;
    int *p;
    p = &x;
    int *k = &y;
    m1(p, k);
    printf("%d %d", x, y);
}

