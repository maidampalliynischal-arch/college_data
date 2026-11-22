#include <stdio.h>
int main(){
    int a[15] = {1, 1, 1, 3, 4, 2, 5, 4, 5, 1, 2, 4, 6, 8, 5}, j;
    for (int i = 0;i < 15;i++){
        int count = 0;
        int already = 0;
        for(j = 0;j < i;j++){
            if(a[i] == a[j]){
                already = 1;
                break;
            }
        
    }
}
}