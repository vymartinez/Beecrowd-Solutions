#include <stdio.h>
 
int main() {
    int t, v;
    float k;
    scanf("%d", &t);
    scanf("%d", &v);
    k = t*v;
    printf("%.3f\n", k/12.0);
    return 0;
}