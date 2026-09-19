#include <stdio.h>

int main(void) {
    int total, qte7;
    float nota;
    qte7 = 0;

    printf("Digite a quantidade de alunos da turma 1: ");
    scanf("%d", &total);

    for (int i = 1; i <= total; i++) {
        do {
            printf("Nota do aluno %d: ", i);
            scanf("%f", &nota);
        } while (nota < 0 || nota > 10);
        if (nota > 7) {
            qte7++;
        }
    }
    if (qte7 != 0) {
        printf("Total de alunos com nota superior a 7: %d\n", qte7);
    } else {
        printf("Não há alunos com nota superior a 7.\n");
    }
    
    return 0;
}