#include <stdio.h>
 
int main() {
    int n, resp, count, counts;
    count = counts = 0;
    resp = 1;
    while (scanf("%d", &n) != EOF) {
        count++;
        if (n == 0) {
            printf("Caso %d: %d numero\n", count, resp);
            printf("0");
        } else {
            for (int i = 1; i <= n; i++) {
                resp += i;
            }
            printf("Caso %d: %d numeros\n", count, resp);
            for (int i = 0; i <= n; i++) {
                counts = i;
                if (i == 0) {
                    printf("0");
                } else {
                    for (int j = 0; j < counts; j++) {
                        printf(" %d", i);
                    }
                }
            }
        }
        printf("\n\n");
        resp = 1;
    }
    return 0;
}