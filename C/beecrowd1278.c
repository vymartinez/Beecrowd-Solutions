#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 55
 
int main() {
    int n, start, end, biggest, isSpace, between;
    scanf("%d", &n);
    while(n != 0) {
        scanf("\n");
        char words[n][SIZE];
        int sizes[n];
        biggest = isSpace = 0;
        for (int j = 0; j < n; j++) {
            start = between = end = 0;
            fgets(words[j], SIZE, stdin);
            words[j][strlen(words[j])-1] = '\0';
            int len = strlen(words[j]);
            for (int i = 0; i < len; i++) {
                if (words[j][i] != ' ') {
                    break;
                }
                start++;
            }
            for (int i = len-1; i >= 0; i--) {
                if (words[j][i] != ' ') {
                    break;
                }
                end++;
            }
            for (int i = 0; (i+start) < (len-end); i++) {
                if (isSpace == 1 && words[j][i+start] == ' ') {
                    between++;
                } else if (isSpace == 0 && words[j][i+start] == ' ') {
                    isSpace = 1;
                    words[j][i-between] = words[j][i+start];
                } else if (isSpace == 1 && words[j][i+start] != ' ') {
                    isSpace = 0;
                    words[j][i-between] = words[j][i+start];
                } else {
                    words[j][i-between] = words[j][i+start];
                    isSpace = 0;
                }
            }
            sizes[j] = len-end-start-between;
            if (sizes[j] > biggest) {
                biggest = sizes[j];
            }
        }
        for (int i = 0; i < n; i++) {
            int k = sizes[i];
            while (k < biggest) {
                printf(" ");
                k++;
            }
            for (int j = 0; j < sizes[i]; j++) {
                printf("%c", words[i][j]);
            }
            printf("\n");
        }
        scanf("%d", &n);
        if (n != 0) {
            printf("\n");
        }
    }
    return 0;
}