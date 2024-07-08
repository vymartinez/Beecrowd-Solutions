#include <stdio.h>
 
int main() {
    float s, j;
    j = 3;
    s = 1;
    for (float i = 2; j<= 39; i += 0) {
        s += j/i;
        j += 2;
        i *= 2;
    }
    printf("%.2f\n", s);
    return 0;
}