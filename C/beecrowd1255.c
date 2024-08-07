#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct word {
    int count;
    char ch;
} word;

int compare(word *a, word *b) {
    if (a->count == b->count) {
        if (a->ch > b->ch) {
            return 1;
        }
    } else if (a->count < b->count) {
        return 1;
    }
    return -1;
}
 
int main() {
    int n, last, notNew;
    scanf("%d\n", &n);
    while(n--) {
        last = notNew = 0;
        char ph[202];
        fgets(ph, 202, stdin);
        int len = strlen(ph);
        word w[len];
        if (ph[len-1] == '\n') {
            ph[len-1] = '\0';
        }
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < last; j++) {
                if (toupper(ph[i]) == toupper(w[j].ch)) {
                    w[j].count++;
                    notNew = 1;
                    break;
                }
            }
            if (notNew == 0 && ph[i] && isalpha(ph[i])) {
                w[last].count = 1;
                w[last].ch = tolower(ph[i]);
                last++;
            }
            notNew = 0;
        }
        qsort(w, last, sizeof(word), compare);
        int max = w[0].count;
        for (int i = 0; i < last; i++) {
            if (w[i].count == max) {
                printf("%c", w[i].ch);
            } else {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}