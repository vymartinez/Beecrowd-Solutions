#include <stdio.h>
#include <string.h>
 
int main() {
    int n, longest = 0;
    scanf("%d", &n);
    while (n != 0) {
        char names[n][51];
        for (int i = 0; i < n; i++) {
            scanf("%s", names[i]);
            if ((strlen(names[i])) > longest) {
                longest = strlen(names[i]);
            }
        }
        for (int i = 0; i < n; i++) {
            int spaces = longest - strlen(names[i]);
            for(int j = 0; j < spaces; j++) {
                printf(" ");
            }
            printf("%s\n", names[i]);
        }
        longest = 0;
        scanf("%d", &n);
        if (n == 0) {
            return 0;
        }
        printf("\n");
    }
    
    return 0;
}