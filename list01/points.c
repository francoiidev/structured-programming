#include <stdio.h>

int main(void) {
    float nota, menor, maior, soma, somaSete, cont, contSete, mediaSete;
    int quatro;
    char option;

    maior = soma = somaSete = cont = contSete = quatro = mediaSete = 0;
    menor = 100;

    while (1) {
        do {
            printf("Digite uma nota entre 0 e 10:\n");
            scanf("%f", &nota);
        } while ((nota < 0) || (nota > 10));

        if (nota >= 9) {
            printf("Nota excelente!\n");
        }
        if (nota < 7) {
            printf("Estude mais!\n");
        }
        if (nota > 7) {
            somaSete += nota;
            contSete++;
        }

        soma += nota;
        cont++;

        if (nota > maior) {
            maior = nota;
        }
        if (nota < menor) {
            menor = nota;
        }
        if (nota < 4) {
            quatro += 1;
        }

        if (contSete != 0) {
            mediaSete = somaSete / contSete;
        } else {
            mediaSete = 0;
        }

        do {
            printf("Deseja digitar mais uma nota? (Y / N)\n");
            scanf(" %c", &option);
        } while ((option != 'Y') && (option != 'N'));

        if (option != 'Y') {
            printf("Número de notas menores que 4: %d\n", quatro);
            printf("Menor nota: %.1f\n", menor);
            printf("Maior nota: %.1f\n", maior);
            printf("Média das notas maiores que 7: %.1f\n", mediaSete);
            printf("Média das notas: %.1f\n", (soma) / cont);
            break;
        }
    }
}