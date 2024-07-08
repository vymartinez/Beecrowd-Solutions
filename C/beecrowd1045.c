#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, n1, n2, n3;
    scanf("%lf %lf %lf", &a, &b, &c);
    n1 = n2 = n3 = 0;
    if ((a>b) && (a>c)) {
        n1 = a;
    } else if((b > a) && (b > c)) {
        n1 = b;
    } else if ((c>a) && (c>b)){
        n1 = c;
    }
    if ((a<b) && (a<c)) {
        n3 = a;
    } else if((b < a) && (b < c)) {
        n3 = b;
    } else if ((c<a) && (c<b)){
        n3 = c;
    }
    if ((a>n3) && (a<n1)) {
        n2 = a;
    } else if((b<n1) && (b>n3)) {
        n2 = b;
    } else {
        n2 = c;
    }
    if (n3 == 0) {
        n3 = n2;
    } else if (n1 == 0) {
        n1 = n2;
    }
    if (n1>= n2+n3) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (pow(n1, 2) == pow(n2, 2) + pow(n3, 2)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if (pow(n1, 2) > pow(n2, 2) + pow(n3, 2)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if (pow(n1, 2) < (pow(n2, 2) + pow(n3, 2))) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ((a == b) && (a == c)) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if (((a == b) && (a != c)) || ((a == c) && (b != c)) || ((b == c) && (b!=a))){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}