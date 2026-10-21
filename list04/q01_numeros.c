#include <stdio.h>
#define MAX 10

int main() {
    int cadeia[MAX], opcao;

    for (int i = 0; i < MAX; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &cadeia[i]);
    }

    printf("Agora, digite o número que estamos buscando: ");
    scanf("%d", &opcao);

    for (int i = 0; i < MAX; i++) {
        if (opcao == cadeia[i]) {
            printf("Este número está entre os digitados.\n");
            return 0;
        }
    }

    /* isolado, pois o programa só vai chegar a esse ponto se verificar todos
    os números e nenhum deles estiver na cadeia. */
    printf("Este número não está entre os digitados.\n");
    return 0;
}