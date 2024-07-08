#include <stdio.h>
 
int main() {
    int pos = 0;
    float n;
    for (int i = 0; i < 6; i++) {
        scanf("%f", &n);
        if (n > 0) {
            pos++;
        }
    }
    printf("%d valores positivos\n", pos);
    return 0;
}