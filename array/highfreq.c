#include <stdio.h>
void mostFrequency(int n, int arr[]){
    int max = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        int already = 0;
        int j = 0;
        for(j = 0;j < i;j++){
            if(arr[j] == arr[i]){
                already = 1;
                break;
            }

        }
        if(already == 1){
            continue;
        }
        for(j = 0;j < n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(max < count){
            max = count;
        }
    }
    printf("%d", max);
}

int main(){
    int n;
    int arr[] = {1, 1, 1, 3, 2, 4, 1, 4, 1, 4, 5};
    n = sizeof(arr)/sizeof(arr[0]);
    mostFrequency(n, arr);
    return 0;
}