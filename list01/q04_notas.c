#include <stdio.h>

int main(void) {
    int qte7, total;
    float nota;

    for (int i = 1; i <= 3; i++) {
        qte7 = 0;
        do {
            printf("Digite o total de alunos da turma %d: ", i);
            scanf("%d", &total);
        } while (total < 1);
        // Se tem 3 turmas, fica subentendido que cada turma tem pelo menos 1 aluno, certo?
        for (int j = 1; j <= total; j++) {
            do {
                printf("Digite a nota (entre 0 e 10) do aluno %d: ", j);
                scanf("%f", &nota);
            } while (nota < 0 || nota > 10);
            if (nota > 7) {
                qte7++;
            }
        }
        printf("\n");
        printf("Total de alunos com a nota superior a 7 na turma %d: %d\n", i, qte7);
        printf("\n");
    }

    return 0;
}