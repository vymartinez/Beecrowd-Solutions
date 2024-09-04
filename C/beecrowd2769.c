#include <stdio.h>
#include <string.h>

#define MAX 1010
#define min(X, Y) (((X) < (Y)) ? (X) : (Y))

int lines[2][MAX];
int times[2][MAX];
int sum[2][MAX];
int in[2];
int out[2];

int n, lowest;

int switchLine(int line, int col) {
    if (sum[line][col] != 0) {
        return sum[line][col];
    }
    if (col == n) {
        return sum[line][col] = out[line];
    }
    if (col == 0) {
        return sum[line][col] = in[line] + lines[line][col] + min(switchLine(line, col+1), times[line][col] + switchLine(!line, col+1));
    }
    if (col+1 <= n-1) {
        return sum[line][col] = lines[line][col] + min(switchLine(line, col+1), times[line][col] + switchLine(!line, col+1));
    }
    return sum[line][col] = lines[line][col] + switchLine(line, col+1);
}
 
int main() {
    while (scanf("%d", &n) != EOF) {
        scanf("%d %d", &in[0], &in[1]);
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < n; i++) {
                scanf("%d", &lines[j][i]);
            }
        }
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < (n-1); i++) {
                scanf("%d", &times[j][i]);
            }
        }
        scanf("%d %d", &out[0], &out[1]);
        memset(sum, 0, sizeof(sum));
        lowest = min(switchLine(0, 0), switchLine(1, 0));
        printf("%d\n", lowest);
    }
    return 0;
}