#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int bonus, atq, def, lvl;
        int turn[2];
        scanf("%d", &bonus);
        for (int i = 0; i < 2; i++) {
            scanf("%d %d %d", &atq, &def, &lvl);
            if (lvl % 2 == 0) {
                turn[i] = (atq+def)/2 + bonus;
            } else {
                turn[i] = (atq+def)/2;
            }
        }
        if (turn[0] > turn[1]) {
            printf("Dabriel\n");
        } else if (turn[0] < turn[1]) {
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }
    return 0;
}