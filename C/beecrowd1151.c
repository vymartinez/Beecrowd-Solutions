#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    int fb[45] = {0, 1, 1};
    for (int i = 0; i < n; i++) {
        if (i > 2) {
            fb[i] = fb[i-1] + fb[i-2];
        }
        if (i == n-1) {
            printf("%d\n", fb[i]);
        } else {
            printf("%d ", fb[i]);
        }
    }
    return 0;
}