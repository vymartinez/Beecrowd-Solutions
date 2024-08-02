#include <stdio.h>
 
int main() {
    int n, resp = 1, p, v;
    p = v = -1;
    scanf("%d", &n);
    int h[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
        if (i != 0 && (h[i] > h[i-1])) {
            if (p == -1) {
                p = 1;
                v = 0;
            } else if (p == 0 && v == 1){
                p = 1;
                v = 0;
            } else {
                resp = 0;
                break;
            }
        } else if (i != 0 && (h[i] < h[i-1])) {
            if (v == -1) {
                p = 0;
                v = 1;
            } else if (p == 1 && v == 0) {
                p = 0;
                v = 1;
            } else {
                resp = 0;
                break;
            }
        } else if (i != 0) {
            resp = 0;
            break;
        }
    }
    printf("%d\n", resp);
    return 0;
}