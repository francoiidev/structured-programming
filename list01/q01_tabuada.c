#include <stdio.h>

int main(void) {
    int numero;

    do {
        printf("Digite um número entre 0 e 11: ");
        scanf("%d", &numero);
    } while ((numero < 0) || (numero > 11));

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", numero, i, (numero * i));
    }
}