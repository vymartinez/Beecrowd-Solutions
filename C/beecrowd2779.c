#include <stdio.h>
 
int main() {
    int n, num, fig, total, last, notNew;
    total = notNew = last = 0;
    scanf("%d %d", &n, &num);
    int figs[n];
    for (int i = 0; i < num; i++) {
        scanf("%d", &fig);
        for (int j = 0; j < n; j++) {
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
    printf("%d\n", (n - total));
    return 0;
}