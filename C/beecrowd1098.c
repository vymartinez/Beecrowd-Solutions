#include <stdio.h>
 
int main() {
    float j = 1;
    for (float i = 0; i < 2; i+= 0.2) {
        if ((i == 1) || (i == 0)) {
            printf("I=%.0f J=%.0f\n", i, j);
            printf("I=%.0f J=%.0f\n", i, j+1);
            printf("I=%.0f J=%.0f\n", i, j+2);
            j += 0.2;
        } else {
            printf("I=%.1f J=%.1f\n", i, j);
            printf("I=%.1f J=%.1f\n", i, j+1);
            printf("I=%.1f J=%.1f\n", i, j+2);
            j += 0.2;
        }
    }
    printf("I=2 J=%.0f\n", j);
    printf("I=2 J=%.0f\n", j+1);
    printf("I=2 J=%.0f\n", j+2);

    return 0;
}