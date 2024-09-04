#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        char word[10005];
        scanf("%s", word);
        int len = strlen(word);
        double resp = len/100.00;
        printf("%.2lf\n", resp);
    }
    return 0;
}