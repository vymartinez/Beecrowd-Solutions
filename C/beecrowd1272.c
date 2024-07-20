#include <stdio.h>
 
int main() {
    int n, last, tamanho;
    tamanho = last = 0;
    scanf("%d\n", &n);
    char word[n][52];
    char initial = ' ';
    for (int i = 0; i < n; i++) {
        char resp[i][50];
        fgets(word[i], 52, stdin);
        while (word[i][tamanho] != '\0') {
            if (word[i][tamanho] >= 97 && word[i][tamanho] <= 122 && initial == ' ') {
                resp[i][last] = word[i][tamanho];
                initial = 'n';
                last++;
            } else if (word[i][tamanho] >= 97 && word[i][tamanho] <= 122 && initial != ' ') {
                initial = 'n';
            } else {
                initial = ' ';
            }
            tamanho++;
        }
        for (int j = 0; j < last; j++) {
            printf("%c", resp[i][j]);
        }
        printf("\n");
        initial = ' ';
        tamanho = last = 0;
    }
    return 0;
}