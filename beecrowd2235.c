#include <stdio.h>
 
int main() {
    int c1, c2, c3, p;
    p = 0;
    scanf("%d %d %d", &c1, &c2, &c3);
    int creditos[] = {c1, c2, c3};
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (creditos[i] < creditos[j]) {
                int tmp = creditos[i];
                creditos[i] = creditos[j];
                creditos[j] = tmp;
            }
        }
    }
    if (creditos[0] == creditos[1] + creditos[2]) {
        p++;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if(creditos[i] == creditos[j]) {
                p++;
            }
        }
    }
    if (p != 0) {
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}