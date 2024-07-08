#include <stdio.h>
 
int main() {
    int j = 7;
    for (int i = 1; i <= 9; i+= 2) {
        printf("I=%d J=%d\n", i, j);
        printf("I=%d J=%d\n", i, j-1);
        printf("I=%d J=%d\n", i, j-2);
        j += 2;
    }
    return 0;
}