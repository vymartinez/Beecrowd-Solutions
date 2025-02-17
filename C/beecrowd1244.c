#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 55

int count;
int n;
char c;

typedef struct str {
    char string[MAX];
    int length;
} str;

str strings[MAX];
int lengths[MAX];

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

char getStrings() {
    int i;
    i = 0;
    while ((c = getchar()) != ' ' && c != '\n') {
        strings[count].string[i] = c;
        i++;
    }
    strings[count].string[i] = '\0';
    lengths[count] = strings[count].length = i;
    count++;
    return c;
}
 
int main() {
    scanf("%d\n", &n);
    while (n--) {
        count = 0;
        while (c != '\n') {
            getStrings();
        }
        qsort(lengths, count, sizeof(int), compare);
        for (int i = 0; i < count; i++) {
            for (int j = 0; j < count; j++) {
                if (lengths[i] == strings[j].length) {
                    strings[j].length = -1;
                    printf("%s", strings[j].string);
                    if (i != count-1) {
                        printf(" ");
                    }
                    break;
                }
            }
        }
        printf("\n");
        c = 'k';
    }
    return 0;
}