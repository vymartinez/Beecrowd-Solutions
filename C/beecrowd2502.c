#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int len, idx;
    while(scanf("%d %d\n", &len, &idx) != EOF) {
        char p1[len+3], p2[len+3];
        fgets(p1, len+3, stdin);
        fgets(p2, len+3, stdin);
        for (int j = 0; j < idx; j++) {
            char word[1003];
            fgets(word, 1003, stdin);
            int l = strlen(word);
            if (word[l-1] == '\n') {
                word[l-1] = '\0';
            }
            for (int i = 0; i < l; i++) {
                for (int k = 0; k < len; k++) {
                    if (isalpha(word[i]) && toupper(word[i]) ==  toupper(p1[k]) && isalpha(p1[k])) {
                        if (isupper(word[i])) {
                            word[i] = toupper(p2[k]);
                        } else {
                            word[i] = tolower(p2[k]);
                        }
                        break;
                    } else if (isalpha(word[i]) && toupper(word[i]) == toupper(p2[k]) && isalpha(p2[k])) {
                        if (isupper(word[i])) {
                            word[i] = toupper(p1[k]);
                        } else {
                            word[i] = tolower(p1[k]);
                        }
                        break;
                    } else if (word[i] == p1[k]) {
                        if (isalpha(p2[k])) {
                            word[i] = tolower(p2[k]);
                        } else {
                            word[i] = p2[k];
                        }
                        break;
                    } else if (word[i] == p2[k]) {
                        if (isalpha(p1[k])) {
                            word[i] = tolower(p1[k]);
                        } else {
                            word[i] = p1[k];
                        }
                        break;
                    }
                }
            }
            printf("%s\n", word);
        }
        printf("\n");
    }
    return 0;
}