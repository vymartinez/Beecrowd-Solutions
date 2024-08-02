#include <stdio.h>
#include <math.h> 

int main() {
    const double PI = 3.14;
    double vol, d;
    while (scanf("%lf %lf", &vol, &d) != EOF) {
        double r = d/2.00;
        double area = PI*(pow(r, 2));
        double h = vol/area;
        printf("ALTURA = %.2lf\nAREA = %.2lf\n", h, area);
    }
    return 0;
}