#include <stdio.h>
 
int main() {
    float x1, x2, y1, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    printf("%.4f\n", sqrt(pow(x1-x2, 2) + pow(y1-y2, 2)));
    return 0;
}