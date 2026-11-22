#include <stdio.h>
int mostFreq(int arr[], int n){
    int max = 0;
    int result = arr[0];
        for(int i = 0;i < 30;i++){
        int count = 0;
        for(int j = 0;j < i;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > max){
            max = count;
            result = arr[i];
        }
    }
    return result;
}
int main(){
    int a[] = {1,1,1,1,1,2,2,1,3,2,3,4,4,3,3,5,6,5,6,5,6,5,6,7,6,5,5,6,8,5};
    int n = sizeof(a)/sizeof(a[0]);

    printf("most ferquent: %d\n", mostFreq(a, n));
    return 0;
}