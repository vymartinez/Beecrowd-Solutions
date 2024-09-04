#include <stdio.h>

char songs[11][50] = {"PROXYCITY", "P.Y.N.G.", "DNSUEY!", "SERVERS", "HOST!",
"CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};
 
int main() {
    int n, i, j;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &i, &j);
        printf("%s\n", songs[i+j]);
    }
    return 0;
}