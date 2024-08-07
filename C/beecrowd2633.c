#include <stdio.h>
#include <stdlib.h>

typedef struct carne {
    char peca[25];
    int valid;
} carne;

int compare(carne *a, carne*b) {
    if (a->valid < b->valid) {
        return -1;
    }
    return 1;
}
 
int main() {
    int n;
    while(scanf("%d", &n) != EOF) {
        carne pecas[n];
        for (int i = 0; i < n; i++) {
            scanf("%s %d", pecas[i].peca, &pecas[i].valid);
        }
        qsort(pecas, n, sizeof(carne), compare);
        for (int i = 0; i < n; i++) {
            if (i == n-1) {
                printf("%s\n", pecas[i].peca);
            } else {
                printf("%s ", pecas[i].peca);
            }
        }
    }
    return 0;
}