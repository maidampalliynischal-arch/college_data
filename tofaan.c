/*
do on the following array
     1 22 36 44 89 30
1)shift 22 right by 3 places
2) shift 44 left by 3 positions
3)insert 100 at 2nd position
4)insert 90 at 6th position
5)delete 2nd position
6)delete 4th position
*/
#include <stdio.h>
int main()
{
    int arr[6] = {1, 22, 36, 44, 89, 30};
    for (int i = 1;i < 4;i++){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
    
    
    printf("{");
    for(int i = 0;i < 6;i++){
        printf("%d ", arr[i]);
    }
    printf("}");
    printf("\n");

//new array is {1,36,44,89,22,30}

int arr2[6] = {1, 36, 44, 89, 22, 30};
    for (int i = 2;i > 0;i--){
        int temp = arr2[i-1];
        arr2[i-1] = arr2[i];
        arr2[i] = temp;
    }
    printf("{");
    for(int i = 0;i < 6;i++){
        printf("%d ", arr2[i]);
    }
    printf("}");
    printf("\n");
//new updated array {44, 1, 36, 89, 22, 30}
int arr3[6] = {44, 1, 36, 89, 22, 30};
    for(int i = 5; i > 1;i-- ){
        arr3[i] = arr3[i-1];
    }
    arr3[1] = 100;
    printf("{");
    for(int i = 0;i < 6;i++){
        printf("%d ", arr3[i]);
    }
    printf("}");
//new updated array  arr4[6] ={44, 100, 1, 36, 89, 22 }
    printf("\n");

int arr4[6] ={44, 100, 1, 36, 89, 22 } ;
    arr4[5] = 90;
    printf("{");
    for(int i = 0;i < 6;i++){
        printf("%d ", arr4[i]);
    }
    printf("}");
    printf("\n");



//new updated array arr5[6] = {44 100 1 36 89 90 }

int arr5[6] = {44, 100, 1, 36, 89, 90 };



    printf("{");
    for(int i = 0;i < 6;i++){
        printf("%d ", arr5[i]);
    }
    printf("}");    
}