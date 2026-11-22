#include <stdio.h>
void which(int arr[], int n, int k){
    for (int i = 0;i , n; i++){
        int seen = 0;
        for (int j = 0;j < i;j++){
            if(arr[i] == arr[j]){
                seen = 1;
                break;
            }
        }
        if (seen){
            continue;
        }
        int count = 0;
        for (int j = 0;j < n;j++ ){
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count == k){
            printf("the num %d has %d as freq", arr[i], k);
        }
    }
}

int main(){
    int a[] = {1,1,1,1,1,2,2,1,3,2,3,4,4,3,3,5,6,5,6,5,6,5,6,7,6,5,5,6,8,5};
    int n = sizeof(a)/sizeof(a[0]);
    int k;
    
    printf("enter freq: ");
    scanf("%d", &k);

    which(a, n, k);
    return 0;
}