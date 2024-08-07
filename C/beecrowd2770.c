#include <stdio.h>
 
int main() {
    int x1, y1, x2, y2, m;
    while(scanf("%d %d %d", &x1, &y1, &m) != EOF) {
        for (int j = 0; j < m; j++) {
            scanf("%d %d", &x2, &y2);
            if ((x2 > x1 && x2 > y1) || (y2 > x1 && y2 > y1) || (x2 > x1 && y2 > x1) || (x2 > y1 && y2 > y1)) {
                printf("%s\n", "Nao");
            } else {
                printf("%s\n", "Sim");
            }
        }
    }
    return 0;
}