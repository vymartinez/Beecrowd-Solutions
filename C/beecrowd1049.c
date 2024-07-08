#include <stdio.h>
#include <string.h>
int main() {
    char classes1[2][15] = {"vertebrado", "invertebrado"}; 
    char classes2[4][15] = {"ave", "mamifero", "inseto", "anelideo"}; 
    char classes3[4][15] = {"carnivoro", "onivoro", "herbivoro", "hematofago"}; 
    char c1[15];
    char c2[15];
    char c3[15];
    int r1, r2, r3;
    scanf("%s %s %s", c1, c2, c3);
    for (int k = 0; k < 2; k++) {
        if (strcmp(c1, classes1[k]) == 0){
            r1 = k;
        }
    }
    for (int k = 0; k < 4; k++) {
        if (strcmp(c2, classes2[k]) == 0){
            r2 = k;
        }
    }
    for (int k = 0; k < 4; k++) {
        if (strcmp(c3, classes3[k]) == 0){
            r3 = k;
        }
    }
    switch(r1) {
        case 0:
            switch (r2) {
                case 0:
                    switch(r3) {
                        case 0:
                            printf("aguia\n");
                        break;
                        case 1:
                            printf("pomba\n");
                        break;   
                    }
                break;
                case 1:
                    switch(r3) {
                        case 1:
                            printf("homem\n");
                        break;   
                        case 2:
                            printf("vaca\n");
                        break;
                break;
                    }
            }
        break;
        case 1:
            switch (r2) {
                case 2:
                    switch(r3) {
                        case 3:
                            printf("pulga\n");
                        break;   
                        case 2:
                            printf("lagarta\n");
                        break;
                    }
                break;
                case 3:
                    switch(r3) {
                        case 3:
                            printf("sanguessuga\n");
                        break;   
                        case 1:
                            printf("minhoca\n");
                        break;   
                    }
                break;
            }
        break;
    }
    return 0;
}