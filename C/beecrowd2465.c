#include <stdio.h>

int n, xi, yi, count;

void passBall(int x, int y, int mi[n][n], int mat[n][n]) {
    if (x < 0 || x >= n || y < 0 || y >= n || mi[x][y] == 1) {
        return;
    } else {
        count++;
        mi[x][y] = 1;
        if (mat[x][y+1] >= mat[x][y] && (x != xi || y+1 != yi)) {
            passBall(x, y+1, mi, mat);
        }
        if (mat[x+1][y] >= mat[x][y] && (x+1 != xi || y != yi)) {  
            passBall(x+1, y, mi, mat);
        }
        if (mat[x][y-1] >= mat[x][y] && (x != xi || y-1 != yi)) {
            passBall(x, y-1, mi, mat);
        }
        if (mat[x-1][y] >= mat[x][y] && (x-1 != xi || y != yi)) {
            passBall(x-1, y, mi, mat);
        }
    }
}
 
int main() {
    count = 0;
    scanf("%d", &n);
    scanf("%d %d", &xi, &yi);
    xi--;
    yi--;
    int mat[n][n];
    int mi[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            mi[i][j] = 0;
        }
    }
    passBall(xi, yi, mi, mat);
    printf("%d\n", count);
    return 0;
}