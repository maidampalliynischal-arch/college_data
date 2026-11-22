#include <stdio.h>
#include <string.h>

void reverse(char s[], int start, int end) {
    while (start < end) {
        char t = s[start];
        s[start++] = s[end];
        s[end--] = t;
    }
}

int main() {
    char s[200];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';   

    int n = strlen(s), start = 0;
    for (int i = 0; i <= n; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverse(s, start, i - 1);
            start = i + 1;
        }
    }
    printf("%s\n", s);
    return 0;
} 