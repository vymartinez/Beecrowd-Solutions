#include <stdio.h>
#include <string.h>

int lost;

void sort(char names[lost][51]) {
    for (int i = 0; i < lost; i++) {
        for (int j = 0; j < lost - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                char temp[51];
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
}
 
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        int n1[n], n2[n], res[n], exps[n];
        lost = 0;
        char players[n][51], choice[n], loosers[n][51];
        for (int i = 0; i < n; i++) {
            scanf("%d %d=%d", &n1[i], &n2[i], &res[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%s %d %c", players[i], &exps[i], &choice[i]);
        }
        for (int i = 0; i < n; i++) {
            int pos = exps[i] - 1;
            if (choice[i] == '+') {
                if (n1[pos] + n2[pos] != res[pos]) {
                    strcpy(loosers[lost], players[i]);
                    lost++;
                }
            } else if (choice[i] == '-') {
                if (n1[pos] - n2[pos] != res[pos]) {
                    strcpy(loosers[lost], players[i]);
                    lost++;
                }
            } else if (choice[i] == '*') {
                if (n1[pos] * n2[pos] != res[pos]) {
                    strcpy(loosers[lost], players[i]);
                    lost++;
                }
            } else if (choice[i] == 'I') {
                if (n1[pos] + n2[pos] == res[pos] || n1[pos] - n2[pos] == res[pos] || n1[pos] * n2[pos] == res[pos]) {
                    strcpy(loosers[lost], players[i]);
                    lost++;
                }
            }
        }
        if (lost == n) {
            printf("None Shall Pass!\n");
        } else if (lost == 0) {
            printf("You Shall All Pass!\n");
        } else {
            sort(loosers);
            for (int i = 0; i < lost; i++) {
                if (i != lost-1) {
                    printf("%s ", loosers[i]);
                } else {
                    printf("%s\n", loosers[i]);
                }
            }
        }
    }
    return 0;
}