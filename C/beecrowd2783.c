#include <stdio.h>
 
int main() {
    int n, c, num, fig, total, last, notNew;
    total = notNew = last = 0;
    scanf("%d %d %d", &n, &c, &num);
    int figsc[c];
    int figs[c];
    for (int i = 0; i < c; i++) {
        scanf("%d", &figsc[i]);
    }
    for (int i = 0; i < num; i++) {
        scanf("%d", &fig);
        for (int k = 0; k < c; k++) {
            if (fig == figsc[k]) { 
                for (int j = 0; j < last; j++) {
                    if (fig == figs[j]) {
                        notNew = 1;
                        break;
                    }
                }
                if (notNew == 0) {
                    figs[last] = fig;
                    total++;
                    last++;
                }
                notNew = 0;
            }
        }
    }
    printf("%d\n", (c - total));
    return 0;
}