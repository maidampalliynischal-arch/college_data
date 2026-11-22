#include <stdio.h>

int main() {
    char a[100], b[100];
    int freq[26] = {0};
    scanf("%s %s", a, b);

    for (int i = 0; a[i]; i++) freq[a[i] - 'a']++;
    for (int i = 0; b[i]; i++) freq[b[i] - 'a']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not same\n");
            return 0;
        }
    }
    printf("Same letters\n");
    return 0;
}