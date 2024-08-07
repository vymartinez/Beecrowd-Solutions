#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct god {
    char name[105];
    int power;
    int kills;
    int deaths;
} god;

int compare(god *a, god *b) {
    if (a->power == b-> power) {
        if (a->kills == b->kills) {
            if (a->deaths == b->deaths) {
                return strcmp(a->name, b->name);
            } else if (a->deaths < b->deaths) {
                return -1;
            } else {
                return 1;
            }
        } else if (a->kills < b->kills) {
            return 1; 
        } else {
            return -1;
        }
    } else if (a->power < b->power) {
        return 1;
    }
    return -1;
}
 
int main() {
    int n;
    scanf("%d", &n);
    god gods[n];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %d", gods[i].name, &gods[i].power, &gods[i].kills, &gods[i].deaths);
    }
    qsort(gods, n, sizeof(god), compare);
    printf("%s\n", gods[0].name);
    return 0;
}