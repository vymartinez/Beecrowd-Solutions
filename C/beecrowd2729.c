#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, count;

typedef struct list {
    char item[21];
} list;

int compare(list *a, list *b) {
    return strcmp(((list*)a)->item, ((list*)b)->item);
}
 
int main() {
    scanf("%d\n", &n);
    while(n--) {
        int len;
        count = 0;
        char lists[20010];
        fgets(lists, 20010, stdin);
        len = strlen(lists);
        if (lists[len-1] == '\n') {
            lists[len-1] = '\0';
        }
        char *word;
        char real [1000][21];
        word = strtok(lists, " ");
        while (word != NULL) {
            int dif = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(word, real[i]) == 0) {
                    dif = 1;
                    break;
                }
            }
            if (dif == 0) {
                strcpy(real[count], word);
                count++;
            }
            word = strtok(NULL, " ");
        }
        list resps[count];
        for (int i = 0; i < count; i++) {
            strcpy(resps[i].item, real[i]);
        }
        qsort(resps, count, sizeof(list), compare);
        for (int i = 0; i < count; i++) {
            if (i == count-1) {
                printf("%s\n", resps[i].item);
            } else {
                printf("%s ", resps[i].item);
            }
        }
    }
    return 0;
}