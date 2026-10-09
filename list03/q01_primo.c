#include <stdio.h>

int primo(int a) {
    int divisores = 0;
    for(int i = 1; i <= a; i++) {
        if ((a % i) == 0) {
            divisores = divisores + i;
        }
    }
    if (divisores == (a + 1)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    do {
        printf("Digite um número inteiro maior que 0: ");
        scanf("%d", &num);
    } while (num <= 0);
    int booleano = primo(num);
    if (booleano == 1) {
        printf("O número %d é primo.\n", num);
    } else {
        printf("O número %d não é primo.\n", num);
    }
}