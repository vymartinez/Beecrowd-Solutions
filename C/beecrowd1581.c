#include <stdio.h>
#include <string.h>
 
int main() {
    int n, k;
    char lang[21];
    char option[21];
    char ingles[10] = "ingles";
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        for(int j = 0; j < k; j++) {
            if (j == 0) {
                scanf("%s", lang);
            } else {
                scanf("%s", option);
                if(strcmp(option, lang) != 0) {
                    strcpy(lang, ingles);
                }
            }
        }
        printf("%s\n", lang);
    }
    return 0;
}