#include <stdio.h>
#include <string.h>
 
int main() {
    char msg[105];
    int len, count = 0;
    scanf("%s", msg);
    len = strlen(msg);
    for (int i = 0; i < len; i++) {
        if (msg[i] == '1') {
            count++;
        }
    }
    printf("%s", msg);
    if (count % 2 == 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    return 0;
}