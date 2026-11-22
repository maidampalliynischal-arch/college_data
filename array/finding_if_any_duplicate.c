#include <stdio.h>
int main(void){
    int arr[] = {1, 1, 2, 3, 1, 3, 1, 3, 3, 1, 5};
    int n = 11;
    for (int i = 0; i < n; i++){
        for(int j = 0;j < n; j++){
            if (arr[i] == arr[j] && i != j){
                printf("yes it has duplicates");
                break;
            } 
            
        }
    }
}