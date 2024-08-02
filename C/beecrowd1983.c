#include <stdio.h>
 
int main() {
    int n, id, highestId;
    double highestNote, note;
    highestNote = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %lf", &id, &note);
        if (note > highestNote) {
            highestNote = note;
            highestId = id;
        }
    }
    if (highestNote >= 8) {
        printf("%d\n", highestId);
    } else {
        printf("Minimum note not reached\n");
    }
    return 0;
}