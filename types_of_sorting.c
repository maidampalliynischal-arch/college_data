// selection sorting

/*#include <stdio.h>
int main(){
    int a[7] = {3, 12, 16, 4, 14, 0, 15};   
    for(int i = 0; i < 6; i++){
        int min_index = i;
        for(int j = i+1;j < 7;j++){
            if(a[j] < a[min_index]){
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    for(int i = 0;i<7;i++){
        printf(" %d ", a[i]);
    }
}
*/
// insertion sorting
/*
#include <stdio.h>
int main(){
    int a[7] = {3, 12, 16, 4, 14, 0, 15};
    for(int i = 1; i < 7; i++){
        int j = i-1; 
        int key = a[i];
        while(key < a[j] && j >= 0){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(int i = 0;i < 7; i++){
        printf(" %d ", a[i]);
    }    
}
*/

