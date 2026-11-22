#include <stdio.h>
int insert_zero(int n, int arr[]){
    int len = n;
    for(int i = 0;i < len;i++){
        if(arr[i]%2 == 0){
            for(int j = len;j > i;j--){
                arr[j] = arr[j-1];
            }
            arr[i+1] = 0;
            len++;
            i++;
        }
    }
    return len;
}
void print_array(int n,int arr[]){
    for(int i = 0;i < n;i++){
        printf(" %d ", arr[i]);
    }
}

int main(){
    int m;
    printf("no.of values in an array: ");
    scanf("%d", &m);
    int n = 2*m;
    int arr[2*m];
    printf("give the elements in an array: ");
    for(int i = 0;i < m;i++){
        scanf("%d", &arr[i]);
    }
    int length = insert_zero(m, arr);
    printf("after sorting");
    print_array(length, arr);

}