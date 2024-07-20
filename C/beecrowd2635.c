#include <stdio.h>
#include <string.h>
 
int main() {
    int s1, s2, len, neww, total, longest, length;
    neww = len = total = longest = 0;
    scanf("%d", &s1);
    char words[s1][101];
    char word[101];
    for (int i = 0; i < s1; i++) {
        scanf("%s", words[i]);
    }
    scanf("%d", &s2);
    for (int i = 0; i < s2; i++) {
        scanf("%s", word);
        len = strlen(word);
        for (int j = 0; j < s1; j++) {
            length = strlen(words[j]);
            for (int k = 0; k < len; k++) {
                if (word[k] != words[j][k]) {
                    neww = 1;
                    break;
                }
            }
            if (neww == 0) {
            total++;
                if (length > longest) {
                    longest = length;
                }
            }
            neww = 0;
        }
        if (total > 0) {
            printf("%d %d\n", total, longest);
        } else {
            printf("-1\n");
        }
        neww = len = total = longest = 0;
    }
    
    return 0;
}