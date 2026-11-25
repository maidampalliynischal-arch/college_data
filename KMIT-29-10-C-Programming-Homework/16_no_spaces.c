#include <stdio.h>

int main(){
    char str[100];
    int words = 0;
    int i;
    int consec = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int j = 0; str[j] != '\0';j++){
      if(str[j] == ' ' && str[j+1] == ' '){
        consec++;
      }
    }
    for(i = 0; str[i] != '\0'; i++){
      if (str[i] == ' '){
        words++;
      }
      
    }
    if(str[i - 1] == ' '){
      words--;
    }
    if(consec > 1){
      words = words -(consec - 1);
    }

    printf("No of words in %s = %d\n",str,words);
    
    return 0;
}
