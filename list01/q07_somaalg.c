#include <stdio.h>

int main(void) {
    int numero, soma;

    do {
        printf("Digite um número inteiro maior ou igual a 0: ");
        scanf("%d", &numero); 
    } while (numero < 0);
    
    int div = 10;
    soma = 0;

    while (div < (numero * 100)) {
        soma += (numero % div);
        numero -= (numero % div);
        numero /= 10;
    }

    printf("Soma dos algarismos: %d\n", soma);

    return 0;
}