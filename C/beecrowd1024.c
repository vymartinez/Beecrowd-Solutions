#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int n, len;
    scanf("%d\n", &n);
    for (int j = 0; j < n; j++) {
        char word[1002];
        gets(word);
        len = strlen(word);
        for (int i = 0; i < len; i++) {
            if (islower(word[i]) || isupper(word[i])) {
                word[i] += 3;
            }
        }
        for (int i = 0, j = len - 1; i <= j; i++, j--) {
        char c = word[i];
        word[i] = word[j];
        word[j] = c;
    }
        for (int i = len/2; i < len; i++) {
            word[i] -= 1;
        }
        printf("%s\n", word);
    }
    return 0;
}