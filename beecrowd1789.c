#include <stdio.h>
 
int main() {
    int n, v, lv, resp;
    lv = 0;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &v);
            if (lv < v) {
                lv = v;
            }
        }
        if (lv < 10) {
            resp = 1;
        } else if ((lv >= 10) && (lv < 20)) {
            resp = 2;
        } else {
            resp = 3;
        }
        lv = 0;
        printf("%d\n", resp);
    }
    return 0;
}