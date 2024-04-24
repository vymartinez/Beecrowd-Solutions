#include <stdio.h>
 
int main() {
    int gi, gg, vi, vg, e, k, jgs;
    vi = vg = e = jgs = 0;
    k = 1;
    while (k == 1) {
        scanf("%d %d", &gi, &gg);
        jgs++;
        if (gi > gg) {
            vi++;
        } else if(gi < gg) {
            vg++;
        } else {
            e++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &k);
    }
    printf("%d grenais\n", jgs);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", e);
    if (vi > vg) {
        printf("Inter venceu mais\n");
    } else if (vi < vg) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    
    return 0;
}