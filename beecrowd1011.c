#include <stdio.h>
 
int main(){
    const double PI = 3.14159;
    double r, v;
    scanf("%lf", &r);
    v = r*r*r*PI*(4.0/3);
    printf("VOLUME = %.3lf\n", v);
    return 0;
}