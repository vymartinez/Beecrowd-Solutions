#include <stdio.h>
 
int main() {
    float a, b, c, m;
    scanf("%f %f %f", &a, &b, &c);
    m = (2*a + 3*b + 5*c)/10;
    printf("MEDIA = %.1f\n", m);
    return 0;
}