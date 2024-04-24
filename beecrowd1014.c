#include <stdio.h>
 
int main() {
    int d;
    float c;
    scanf("%d", &d);
    scanf("%f", &c);
    printf("%.3f km/l\n", d/c);
    return 0;
}