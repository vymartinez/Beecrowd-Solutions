#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int x1, y1, x2, y2, d1, d2;
    x1 = x2 = y1 = y2 = 1;
    while ((x1 != 0) && (x2 != 0) && (y1 != 0) && (y2 != 0)) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if ((x1 == 0) && (x2 == 0) && (y1 == 0) && (y2 == 0)) {
            return 0;
        } else {
            d1 = abs(x1 - x2);
            d2 = abs(y1 - y2);
            if ((d1 == d2) || (d1 == 0) || (d2 == 0)) {
                if ((x1 == x2) && (y1 == y2)){
                    printf("0\n");
                } else {
                    printf("1\n");
                }
            } else {
                printf("2\n");
            }
        }
    }
    return 0;
}