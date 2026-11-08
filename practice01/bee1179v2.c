#include <stdio.h>
 
int main() {
    int valor, par[5], impar[5];
    int contP = 0, contI = 0;
    
    for(int i = 0; i < 15; i++) {
        scanf("%d", &valor);

        if (valor % 2 == 0) {
            par[contP] = valor;
            contP++;
        } else {
            impar[contI] = valor;
            contI++;
        }

        if (contP == 5) {
            for (int i = 0; i < 5; i++) {
                printf("par[%d] = %d\n", i, par[i]);
            }
            contP = 0;
        }

        if (contI == 5) {
            for (int i = 0; i < 5; i++) {
                printf("impar[%d] = %d\n", i, impar[i]);
            }
            contI = 0;
        }
    }

    for (int i = 0; i < contP; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    
    for (int i = 0; i < contI; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
 
    return 0;
}