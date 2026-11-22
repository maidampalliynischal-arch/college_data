#include <stdio.h>

int input(int n, int arr[n]){
    printf("Before sorting\n");
    for(int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

void sorting(int arr[], int n){
    int pass= 0;
    for(int j = 0; j < n-1; j++){
        bool swap;
        
        for(int i = 0; i < n-1; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
                swap = 1;
            }
        }
        pass++;

        

        if(swap == 0) {
            
            break;
        }
    }
    printf("%d\n",pass);
    printf("After sorting\n");
    for(int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
}

int main(){
    int n;
    printf("the number of elements to be in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("enter the elements: \n");
    for(int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
    input(n, arr);
    sorting(arr, n);
    return 0;
}
