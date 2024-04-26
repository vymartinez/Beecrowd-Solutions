#include <stdio.h>
 
int main() {
    int n, num, pts, resp;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        v[i] = num;
    }
    pts = resp = 1;
    for (int i = 1; i < n;i ++) {
        if (v[i] == v[i-1]) {
            pts++;
        }
        if (resp < pts) {
            resp = pts;
        }
        if (v[i] != v[i-1]) {
            pts = 1;
        }
    }
    printf("%d\n", resp);
    return 0;
}