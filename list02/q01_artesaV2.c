#include <stdio.h>

float calculaValorGanho(void) {
    float valor, custos; 
    int quantidade;
    // não sabia se precisava validar entrada, porém preferi validar.
    do {
        printf("Digite o valor de venda do produto da artesã: ");
        scanf("%f", &valor);
    } while(valor <= 0);
    
    do { 
        printf("Digite o custo de produção do produto: ");
        scanf("%f", &custos);
    } while((custos <= 0) || (custos >= valor)); // custo de produção < valor de venda para haver lucro

    do {
        printf("Digite a quantidade de produtos vendidos: ");
        scanf("%d", &quantidade);
    } while(quantidade < 0);
    /* já que as leituras estão, agora, dentro da função implementada, preferi forçar o usuário
    a digitar apenas quantidades maiores que 0, pela dificuldade de retornar um valor
    para a main que dissesse que não houve nenhuma venda sem entrar em conflito com o 
    intuito da função e printar uma mensagem diferente. Ao invés disso, ele só retorna R$ 0.00
    como lucro total. */

    float lucro = (valor - custos) * quantidade;

    return lucro;
}

int main() {
    float lucro;
    lucro = calculaValorGanho();

    printf("Valor ganho pela artesã: R$ %.2f.\n", lucro);

    return 0;
}