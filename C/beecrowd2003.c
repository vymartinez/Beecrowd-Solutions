#include <stdio.h>
 
int main() {
    int h, min, total, resp;
    while(scanf("%d:%d", &h, &min) != EOF) {
        total = (60 * (h+1)) + min;
        if (480 - total >= 0) {
            resp = 0;
        } else {
            resp = abs(480-total);
        }
        printf("Atraso maximo: %d\n", resp);
    }
    return 0;
}