#include <stdio.h>
 
int main() {
    int i, a, m, d, rd;
    scanf("%d", &i);
    a = i/365;
    rd = i%365;
    m = rd/30;
    d = rd%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
    return 0;
}