#include <stdio.h>
 
int main() {
    int resp, guess, total = 0;
    scanf("%d", &resp);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &guess);
        if (guess == resp) {
            total++;
        }
    }
    printf("%d\n", total);
    return 0;
}