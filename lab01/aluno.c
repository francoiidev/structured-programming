#include <stdio.h>

int main() {
    float n1, n2, n3, media, n4, nmedia;

    printf("Digite as 3 notas do aluno:\n");

    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    printf("A média do aluno foi de %.1f pontos.\n", media);

    if (media >= 7 && media <= 10) {
        printf("O aluno foi aprovado, parabéns!!\n");
    } else if (media >= 4 && media < 7) {
        printf("O aluno ficou de exame final.\n");

        printf("Digite a nota do exame final:\n");

        scanf("%f", &n4);

        nmedia = (media + n4) / 2;

        if (nmedia >= 6 && nmedia <= 10) {
            printf("Aluno aprovado no exame final com uma média de %.1f pontos. Parabéns!!\n", nmedia);
        } else if (media < 6 && media >= 0) {
            printf("Aluno reprovado no exame final com uma média de %.1f, sinto muito.\n", nmedia);
        } else {
            printf("Média inválida, favor revise os valores de entrada utilizados.\n");
        }
    } else if (media >= 0 && media < 4) {
        printf("O aluno foi reprovado, sinto muito.\n");
    } else {
        printf("Média inválida, favor revise os valores de entrada utilizados.\n");
    }

}