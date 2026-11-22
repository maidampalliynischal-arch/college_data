#include <stdio.h>
int main(){
int num[31] = {1,1,1,1,2,1,2,1,3,3,3,4,4,5,4,6,4,8,7,6,4,3,2,4,4,5,4,4,4,3,3};
int n = 31;
int uc = 0;
    for(int i = 0;i < n;i++){
        int already = 0;
        for(int j = 0;j < i;j++){
            if(num[i] == num[j]){
                already = 1;
                break;
            }
        }
        if (!already){
            num[uc] = num[i];
            uc++;
        }
    }
        for ( int i = 0; i < uc;i++){
            printf("%d ", num[i]);
        }
    return 0;
}