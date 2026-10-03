#include <stdio.h>

int leNaoNegativo(void) {
    int numero;

    do {
        printf("Digite o número (0 para encerrar): ");
        scanf("%d", &numero);
    } while(numero < 0);

    return numero;
}

int somaDivisores(int numero) {
    int divisor = 1, soma = 0;

    while (divisor != numero) {
        if ((numero % divisor) == 0) {
            soma += divisor;
        }
        divisor++;
    } // usei um while para verificar a condição antes do início de cada iteração e não incluir o próprio número.

    return soma;
}

int saoAmigos(int num1, int num2) {
    if ((somaDivisores(num1) == num2) && (somaDivisores(num2) == num1)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    while(1) {
        printf("\nNúmero 1\n");

        int n1 = leNaoNegativo();
        if (n1 == 0) {
            return 0;
        }
        
        printf("\nNúmero 2\n");

        int n2 = leNaoNegativo();
        if (n2 == 0) {
            return 0;
        }

        if (saoAmigos(n1, n2) == 1) {
            printf("\n> Os números %d e %d são números amigos.\n", n1, n2);
        } else {
            printf("\n> Os números %d e %d não são números amigos.\n", n1, n2);
        }
    }

    return 0;
}