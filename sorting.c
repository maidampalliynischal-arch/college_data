#include <stdio.h>
#include
int main(void){
    int arr[]= {1, 3, 4, 2, 7, 7, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
    for(int j = 0; j < n-1; j++){
        for(int i = 0;i < n-1; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
}
