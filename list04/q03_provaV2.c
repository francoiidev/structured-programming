#include <stdio.h>

int main() {
    char alt[10], resp[10], opcao;
    int nota;

    printf("Digite o gabarito da prova, na ordem (letras minúsculas):\n");

    for (int i = 0; i < 10; i++) {
        do {
            printf("Questão %d: ", i + 1);
            scanf(" %c", &alt[i]);
        } while ((alt[i] != 'a') && (alt[i] != 'b') && (alt[i] != 'c') && (alt[i] != 'd') && (alt[i] != 'e'));
    }

    while (1) {
        nota = 0;
        printf("\nDigite o gabarito do aluno, na ordem (letras minúsculas):\n");

        for (int i = 0; i < 10; i++) {
            do {
                printf("Questão %d: ", i + 1);
                scanf(" %c", &resp[i]);
            } while ((resp[i] != 'a') && (resp[i] != 'b') && (resp[i] != 'c') && (resp[i] != 'd') && (resp[i] != 'e'));

            if (resp[i] == alt[i]) {
                nota++;
            }
        }

        printf("\nA nota desse aluno foi de %.1f pontos.\n", 1.0 * nota);

        printf("Deseja continuar (Y/N)? ");
        do {
            scanf(" %c", &opcao);
        } while (opcao != 'Y' && opcao != 'N');

        if (opcao == 'Y')
            continue;
        else 
            break;
    }

    return 0;
}