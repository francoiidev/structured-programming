#include <stdio.h>
 
void printVet(int u[]) {
    if (u[1] % 2 == 0) {
        for (int i = 0; i < 5; i++) {
            printf("par[%d] = %d\n", i, u[i]);
        }
    } else {
        for (int i = 0; i < 5; i++) {
            printf("impar[%d] = %d\n", i, u[i]);
        }
    }
}
 
void separar(int v[]) {
    int par[5], impar[5];
    int contP = 0, contI = 0;
    
    for(int i = 0; i < 15; i++) {
        if (v[i] % 2 == 0) {
            par[contP] = v[i];
            contP++;
            if (contP == 5) {
                printVet(par);
                contP = 0;
            }
        } else {
            impar[contP] = v[i];
            contI++;
            if (contI == 5) {
                printVet(impar);
                contI = 0;
            }
        }
    }
    
    for (int i = 0; i < contP; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    
    for (int i = 0; i < contI; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
}
 
int main() {
    int valores[15];
    
    for(int i = 0; i < 15; i++) {
        scanf("%d", &valores[i]);
    }
    
    separar(valores);
 
    return 0;
}