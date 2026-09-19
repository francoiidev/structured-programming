#include <stdio.h>

int main(void) {
    int n;
    printf("Digite o número de linhas da tabela: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }

    return 0;
}