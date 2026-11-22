#include <stdio.h>
int main(){
/*    int a = 10, b = 11;
    int *p;
    p = &a;
    *p = 40;
    printf("%d\n", a);

    p = &b;
    *p = 22;
    printf("%d\n", b);*/

/*    int c = 10;
    int *p;
    p = &c;
    *p = *p * 2;
    printf("%d", c);*/

/*    int arr[] = {1, 2, 3, 4, 5};
    int *p;
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    p = arr;
    for(int i = 0;i<size;i++){
        sum += *p++;
    }
    printf("%d", sum);*/


    int n;
    printf("the no. of elements in the array: ");
    scanf("%d", &n);
    char arr[n];
    for (int i;i < n;i++){
        printf("give the characters you want in the array: ");
        scanf("%c", &arr[i]);
    }
    int count = 0;
    for(int j = 0;j < n;j++){
        if(arr[j] == 'a'|| arr[j] == 'e' || arr[j] == 'i' || arr[j] == 'o' || arr[j] == 'u' || arr[j] == 'A' || arr[j] == 'E' || arr[j] == 'I' || arr[j] == 'O' || arr[j] == 'U'){
            count++;
        }
    }
    printf("the no. of vowels in the array are %d", count);

}