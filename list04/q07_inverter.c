#include <stdio.h>
#define TAM 50

void preenche (int v[]){
    for (int i = 0; i < 50; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void imprime (int v[]){
    for (int i = 0; i < 50; i++) {
        printf("%d ", v[i]);
    }
}

void troca (int *x, int *y); // protótipo

void inverte (int v[]){
    int i = 0, j = 49;

    while (1) {
        if (i == 25 || j == 24) {
            break;
        }

        troca(&v[i], &v[j]);

        i++;
        j--;
    }
}

void troca (int *x, int *y){
    int aux;
    aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int vet[50];

    preenche(vet);

    inverte(vet);

    imprime(vet);

    return 0;
}