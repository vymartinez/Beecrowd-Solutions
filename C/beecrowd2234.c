#include <stdio.h>
 
int main() {
    double resp, hotdog, people;
    scanf("%lf %lf", &hotdog, &people);
    resp = hotdog/people * 1.00;
    printf("%.2lf\n", resp);
    return 0;
}