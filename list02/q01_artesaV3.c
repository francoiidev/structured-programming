#include <stdio.h>

float calculaValorGanho(float valor, float custos, int quantidade) {
    float lucro = (valor - custos) * quantidade;
    return lucro;
}

int main() {
    float venda, gasto, lucro;
    int qte;
    // não sabia se precisava validar entrada, porém preferi validar.
    do {
        printf("Digite o valor de venda do produto da artesã: ");
        scanf("%f", &venda);
    } while(venda <= 0);

    do { 
        printf("Digite o custo de produção do produto: ");
        scanf("%f", &gasto);
    } while((gasto <= 0) || (gasto >= venda)); // custo de produção < valor de venda para haver lucro

    do {
        printf("Digite a quantidade de produtos vendidos: ");
        scanf("%d", &qte);
    } while(qte < 0);

    if (qte == 0) {
        printf("Nenhum produto foi vendido pela artesã.\n");
        return 0;
    }

    lucro = calculaValorGanho(venda, gasto, qte);

    printf("Valor ganho pela artesã: R$ %.2f.\n", lucro);

    return 0;
}