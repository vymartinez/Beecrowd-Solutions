    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    typedef struct chars {
        int id;
        int count;
    } chars;

    int compare(chars* a, chars* b) {
        if (a->count == b->count) {
            if (a->id < b->id) {
                return 1;
            } else {
                return -1;
            }
        } else if (a->count < b->count) {
            return -1;
        } else {
            return 1;
        }
    }
    
    int main() {
        char word[1002], last, notNew, first = 0;
        while(scanf("%s", word) != EOF) {
            if (first == 1) {
                printf("\n");
            }
            last = notNew = 0;
            int len = strlen(word);
            chars ch[len];
            for (int i = 0; i < len; i++) {
                for(int j = 0; j < last; j++) {
                    if (word[i] == ch[j].id) {
                        ch[j].count++;
                        notNew = 1;
                        break;
                    }
                }
                if (notNew == 0) {
                    ch[last].id = word[i];
                    ch[last].count = 1;
                    last++;
                }
                notNew = 0;
            }
            qsort(ch, last, sizeof(chars), compare);
            for (int i = 0; i < last; i++) {
                printf("%d %d\n", ch[i].id, ch[i].count);
            }
            if (first == 0) {
                first = 1;
            }
        }
        return 0;
    }