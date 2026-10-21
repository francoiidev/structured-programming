#include <stdio.h>
#define MAX 9999

void lerNumeros (int v[]) {
    for(int i = 0; i < 50; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &v[i]);
    }
}

void ordemCrescente(int v[]) {
    int menor;
    int ordem[50];
    
    for (int i = 0; i < 50; i++) {
        menor = MAX;
        for (int j = 0; j < 50; j++) {
            if (v[j] < menor) {
                menor = v[j];
            }
        } // primeiro loop para achar o menor daquela iteração

        ordem[i] = menor;

        for (int j = 0; j < 50; j++) {
            if (v[j] == menor) {
                v[j] = MAX;
                break;
            }
        } // segundo loop para "eliminar" o até então menor
    }

    printf("Ordem crescente: ");

    for(int i = 0; i < 50; i++) {
        printf("%d ", ordem[i]);
    }

    printf("\n");
}

int main() {
    int num[50];

    lerNumeros(num);

    ordemCrescente(num);

    return 0;
}