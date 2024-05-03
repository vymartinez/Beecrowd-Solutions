#include <stdio.h>
 
int main() {
    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    if (n1 > n2) {
        if (n3 >= n2) {
            printf(":)\n");
        } else {
            if ((n2-n1) < (n3-n2)) {
                printf(":)\n");
            } else {
                printf(":(\n");
            }
        }
    } else if (n1 == n2) {
        if (n2 >= n3) {
            printf(":(\n");
        } else {
            printf(":)\n");
        }
    } else {
        if (n2 >= n3) {
            printf(":(\n");
        } else {
            if ((n2-n1) > (n3-n2)) {
                printf(":(\n");
            } else {
                printf(":)\n");
            }
        }
    }
    return 0;
}