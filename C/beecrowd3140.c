#include <stdio.h>
#include <string.h>

#define MAX 1010
 
int main() {
    char line[MAX];
    int body, onBody;
    body = 0;
    while (1) {
        onBody = 0;
        gets(line);
        int len = strlen(line);
        for (int i = 0; i < len; i++) {
            if (strcmp(line+i, "<body>") == 0) {
                body = 1;
                onBody = 1;
                break;
            }
            if (strcmp(line+i, "</body>") == 0) {
                return 0;
            }
        }
        if (body == 1 && !onBody) {
            printf("%s\n", line);
        }
    }
    return 0;
}