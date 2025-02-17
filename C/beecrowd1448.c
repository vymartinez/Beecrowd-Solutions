#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 110
 
int main() {
    int n, team1, team2, priority, noErrors;
    char answer[MAX], one[MAX], two[MAX];   
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i++) {
        team1 = team2 = priority = 0;
        noErrors = 1;
        fgets(answer, 110, stdin);
        fgets(one, 110, stdin);
        fgets(two, 110, stdin);
        int len = strlen(answer);
        for (int j = 0; j < len; j++) {
            if (answer[j] == one[j]) {
                team1++;
            }
            if (answer[j] == two[j]) {
                team2++;
            }
            if (team1 > team2 && noErrors == 1) {
                priority = 1;
            } else if (team2 > team1 && noErrors == 1) {
                priority = 2;
            }
            if (team1 != team2) {
                noErrors = 0;
            }
        }
        printf("Instancia %d\n", i);
        if (team1 > team2) {
            printf("time 1\n");
        } else if (team2 > team1) {
            printf("time 2\n");
        } else {
            if (priority == 1) {
                printf("time 1\n");
            } else if (priority == 2) {
                printf("time 2\n");
            } else {
                printf("empate\n");
            }
        }
        printf("\n");
    }
    return 0;
}