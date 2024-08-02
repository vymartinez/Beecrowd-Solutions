#include <stdio.h>
 
int main() {
    int s, t, f, resp;
    scanf("%d %d %d", &s, &t, &f);
    resp = s + t + f;
    if (resp >= 24) {
        resp -= 24;
    } else if (resp < 0) {
        resp += 24;
    }
    printf("%d\n", resp);
    return 0;
}