#include <stdio.h>
 
int main() {
    int t, d, ing, b, preco;
    double resp, biggest;
    scanf("%d", &t);
    while (t--) {
        biggest = 0;
        scanf("%d %d %d", &d, &ing, &b);
        int prices[ing];
        int num;
        for (int i = 0; i < ing; i++) {
            scanf("%d", &prices[i]);
        }
        for (int i = 0; i < b; i++) {
            preco = 0;
            scanf("%d", &num);
            int pos, qtd;
            for (int j = 0; j < num; j++) {
                scanf("%d %d", &pos, &qtd);
                preco += qtd * (prices[pos]);
            }
            resp = (d/preco);   
            if (resp > biggest) {
                biggest = resp;
            }
        }
        printf("%.0lf\n", biggest);
    }
    return 0;
}