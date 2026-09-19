#include <stdio.h>

int main(void) {
    int sinal = 1, denominador = 1;
    double soma = 0;

    for (int i = 1; i <= 1000000; i++) {
        soma += sinal * (1.0 / denominador);
        denominador += 2;
        sinal *= (-1);
    }

    printf("pi/4 = %lf\npi = %lf\n", soma, soma * 4);
}