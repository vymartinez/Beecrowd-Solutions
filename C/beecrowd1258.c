#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct shirt {
    char size;
    char color[10];
    char name[50];
} shirt;

int compare(shirt *a, shirt *b) {
    if (strcmp((a->color), "branco") == 0) {
        if (strcmp((b->color), "vermelho") == 0) {
            return -1;
        } else {
            if (a->size == 'G') {
                if (b->size != 'G') {
                    return 1;
                } else {
                    return(strcmp(a->name, b->name));
                }
            } else if (a->size == 'M') {
                if (b-> size == 'G') {
                    return -1;
                } else if (b->size == 'P') {
                    return 1;
                } else {
                    return(strcmp(a->name, b->name));
                }
            } else {
                if (b->size != 'P') {
                    return -1;
                } else {
                    return(strcmp(a->name, b->name));
                }
            }
        }
    } else {
        if (strcmp((b->color), "branco") == 0) {
            return 1;
        } else {
            if (a->size == 'G') {
                if (b->size != 'G') {
                    return 1;
                } else {
                    return(strcmp(a->name, b->name));
                }
            } else if (a->size == 'M') {
                if (b-> size == 'G') {
                    return -1;
                } else if (b->size == 'P') {
                    return 1;
                } else {
                    return(strcmp(a->name, b->name));
                }
            } else {
                if (b->size != 'P') {
                    return -1;
                } else {
                    return(strcmp(a->name, b->name));
                }
            }
        }
    }
    return -1;
}
 
int main() {
    int n;
    scanf("%d\n", &n);
    while (n != 0) {
        shirt cam[n];
        for (int i = 0; i < n; i++) {
            gets(cam[i].name);
            scanf("%s %c\n", cam[i].color, &cam[i].size);
        }
        qsort(cam, n, sizeof(shirt), compare);
        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", cam[i].color, cam[i].size, cam[i].name);
        }
        scanf("%d", &n);
        if (n != 0) {
            scanf("\n");
            printf("\n");
        }
    }
    return 0;
}