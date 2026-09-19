#include <stdio.h>

int main(void) {
    int numero, div, soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    soma = 0;
    div = 1;

    while (div != numero) {
        if ((numero % div) == 0) {
            soma += div;
        }
        div++;
    }

    if (soma == numero) {
        printf("O número %d é um número perfeito (%d = %d).\n", numero, soma, numero);
    } else {
        printf("O número %d não é um número perfeito (%d = %d).\n", numero, soma, numero);
    }
    if (soma == 1)
        printf("Fato curioso: esse número é primo (divisível apenas por um e por ele mesmo)!\n");

    return 0;
}