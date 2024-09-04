#include <stdio.h>
 
int main() {
    int len;
    char word[25];
    scanf("%s", word);
    len = strlen(word);
    if (len >= 10) {
        printf("palavrao");
    } else {
        printf("palavrinha");
    }
    printf("\n");
    return 0;
}