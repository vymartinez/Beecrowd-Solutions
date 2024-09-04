#include <stdio.h>
 
int main() {
    int n, m, possible;
    int notas[6] = {2, 5, 10, 20, 50, 100};
    scanf("%d %d", &n, &m);
    while (n != 0 || m != 0) {
        possible = 0;
        int total = m - n;
        for (int i = 0; i < 6; i++) {
            for (int j = i+1; j < 6; j++) {
                if (notas[i] + notas[j] == total) {
                    possible = 1;
                    break;
                }
            }
        }
        if (possible == 0) {
            printf("impossible\n");
        } else {
            printf("possible\n");
        }
        scanf("%d %d", &n, &m);
    }
    return 0;
}