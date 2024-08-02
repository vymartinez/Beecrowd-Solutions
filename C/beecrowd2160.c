#include <stdio.h>
#include <string.h>
 
int main() {
    char name[502];
    fgets(name, 502, stdin);
    int len = strlen(name);
    if (len-1 > 80) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}