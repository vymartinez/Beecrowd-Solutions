#include <stdio.h>
#include <string.h>
 
int main() {
    int n, len, total = 0;
    char f[1002];
    scanf("%d\n", &n);
    int count[n][26];
    for (int i = 0; i < n; i++) {
        fgets(f, 1002, stdin);
        len = strlen(f);
        for (int j = 0; j < len; j++) {
            if (f[j] > 96 && f[j] < 123) {
                count[i][f[j] - 97] = 1;
            }
        }
        for (int j = 0; j < 26; j++) {
            if (count[i][j] == 1) {
                total++;
            }
        }
        if (total == 26) {
            printf("frase completa\n");
        } else if ((total >= 13) && (total < 26)) {
            printf("frase quase completa\n");
        } else {
            printf("frase mal elaborada\n");
        }
        total = 0;
    }
    return 0;
}