#include <stdio.h>
 
int main() {
    int ip, j1, j2, r, a, res, resp;
    scanf("%d %d %d %d %d", &ip, &j1, &j2, &r, &a);
    res = j1+j2;
    if (res % 2 == 0) {
        if (ip == 1 && r != 1) {
            resp = 1;
        } else {
            if ((r == 1 && a == 0) || (r == 0 && a == 1)) {
                resp = 1;
            } else {
                resp = 2;
            }
        }
    } else {
        if (ip == 0 && r != 1) {
            resp = 1;
        } else {
            if ((r == 1 && a == 0) || (r == 0 && a == 1)) {
                resp = 1;
            } else {
                resp = 2;
            }
        }
    }
    printf("Jogador %d ganha!\n", resp);
    return 0;
}