#include <stdio.h>

void calculaValorGanho(float valor, float custos, int quantidade) {
    float lucro;
    if (quantidade == 0) {
        printf("Nenhum produto foi vendido pela artesã.\n");
    } else {
        lucro = (valor - custos) * quantidade;
        printf("Valor ganho pela artesã: R$ %.2f.\n", lucro);
    }
    return;
}

int main() {
    float venda, gasto;
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

    calculaValorGanho(venda, gasto, qte);

    return 0;
}