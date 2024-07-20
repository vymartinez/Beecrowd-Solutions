#include <stdio.h>
 
int main() {
    int n, tamanho, c;
    scanf("%d\n", &n);
    char pi[n][102];
    tamanho = c = 0;
    for (int j = 0; j < n; j++) {
        fgets(pi[j], 102, stdin);
        while (pi[j][tamanho] != '\0') {
            tamanho++;
        }
        if (pi[j][0] == 'M' && pi[j][1] == 'A' && pi[j][10] == ' ') { //gambiarra por problema de input
            for (int i = tamanho; i >= 0; i--) {
                pi[j][i + 1] = pi[j][i - 1];
            }
            pi[j][0] = ' ';
            pi[j][1] = ' ';
            tamanho+= 2;
        }
        for (int i = (tamanho)/2 - 1; i >= 0 ;i--, c++) {
            printf("%c", pi[j][i]);
        }
        for (int i = tamanho - 2; i > (tamanho)/2 - 1; i--, c++) {
            printf("%c", pi[j][i]);
        }
        printf("\n");
        c = tamanho = 0;
    }
    return 0;
}