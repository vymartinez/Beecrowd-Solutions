#include <stdio.h>
 
int main() {
    int count, n;
    scanf("%d %d", &count, &n);
    while (n--) {
        char action[10];
        scanf("%s", action);
        if (strcmp(action, "fechou") == 0) {
            count++;
        } else {
            count--;
        }
    }
    printf("%d\n", count);
    return 0;
}