#include <stdio.h>

float areaCirculo(float r) {
    float area = 3.14 * (r * r);
    return area;
}

float compCircunferencia(float r) {
    float comp = 2 * 3.14 * r;
    return comp;
}

void lerMenu() {
    int opcao;
    float raio = 1;
    while (1) {
        printf("\nMENU\n1 - Alterar raio\n2 - Exibir diametro\n3 - Exibir area\n4 - Exibir perimetro\n0 - Sair\n");
        // assumi que os dois itens no documento com o número 2 fossem um erro de digitação, então coloquei 1, 2, 3, 4 e 0.
        printf("\n");
        do {
            printf("Digite a opção escolhida: ");
            scanf("%d", &opcao);
        } while((opcao > 4) || (opcao < 0));
        printf("\n");
        switch(opcao) {
            case 0:
                return;
            case 1:
                printf("Digite um novo valor para o raio: ");
                scanf("%f", &raio);
                break;
            case 2:
                printf("Diâmetro: %.1f\n", 2 * raio);
                break;
            case 3:
                printf("Área do círculo: %.2f.\n", areaCirculo(raio));
                break;
            case 4:
                printf("Comprimento/perímetro da circunferência: %.2f\n", compCircunferencia(raio));
                break;
        }
    }
}

int main() {
    lerMenu();

    return 0;
}