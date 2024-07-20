#include <stdio.h>

int main() {
    int n, x, y, ax, ay, bx, by, cx, cy, dx, dy, resp = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d %d %d %d %d %d %d %d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &x, &y);
        if (x >= ax && x>= dx && x <= bx && x <= cx &
            y >= by && y >= ay && y <= dy && y <= cy
        ) {
            printf("1\n");
        } else {
            printf("0\n");
        }}
    return 0;
}