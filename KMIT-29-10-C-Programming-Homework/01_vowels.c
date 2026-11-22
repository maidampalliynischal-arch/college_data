#include <stdio.h>
int main(){
    char line[100];
    printf("enter a line: ");
    scanf("%[^\n]", line);
    int count = 0;
    char vowels[11] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
    for (int i = 0; line[i] != '\0'; i++){
        for (int j = 0; vowels[j] != '\0'; j++){
            if (line[i] == vowels[j]){
                count++;
            }
        }
    }
    printf("%d", count);
}