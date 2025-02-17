#include <stdio.h>
 
int main() {
    int n, min, max, count, height;
    while (scanf("%d %d %d", &n, &min, &max) != EOF) {
        count = 0;
        while (n--) {
            scanf("%d", &height);
            if (height >= min && height <= max) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}