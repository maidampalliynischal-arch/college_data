#include <stdio.h>
#include <string.h>
int main(){
    char fname[50];
    char mname[50];
    char lname[50];
    char whole_name[150];
    scanf("%s", fname);
    scanf("%s", mname);
    scanf("%s", lname);
    int i;
    for(i = 0; fname[i] != '\0'; i++){
        whole_name[i] = fname[i]; 
    }
    printf("%s", whole_name);
    whole_name[i] = ' ';
    i++;
    for(int j =0; mname[i] != '\0'; j++){
        whole_name[i] = mname[j];
        i++;
    }
    printf("%s", whole_name);
    whole_name[i] = ' ';
    i++;
    for(int x; lname[x] != '\0';x++ ){
        whole_name[i] = lname[x];
        i++;
    }
    printf("%s", whole_name);
    whole_name[i] = '\0';

    /*for(int k = 0;whole_name[k] != '\0'; k++){
        printf("%c",whole_name[k]);
        k++;
    }*/
    printf("%s", whole_name);
    return 0;

}