#include <stdio.h>
#include <string.h>
 
int main() {
    char tweet[502];
    fgets(tweet, 502, stdin);
    int len = strlen(tweet);
    if (len - 1 > 140) {
        printf("MUTE\n");
    } else {
        printf("TWEET\n");
    }
    return 0;
}