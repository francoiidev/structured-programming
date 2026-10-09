#include <stdio.h>

void escada(int a) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= (a - i); j++) {
            printf(" ");
        }
        for (int f = 1; f <= i; f++) {
                printf("#");
        }
        printf("\n");
        // nem acredito que consegui pensar nisso e que realmente funcionou kkkk
    }
}

int main() {
    int num;
    printf("Digite o número de linhas: ");
    scanf("%d", &num);
    escada(num);
    return 0;
}