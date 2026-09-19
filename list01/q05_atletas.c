#include <stdio.h>

int main(void) {
    float peso, altura, maiorM = 0, pesoF = 0, mediaIdade = 0, mediaIdadeM = 0;
    int idade, somaIdade = 0, somaIdadeM = 0, qteM = 0, qteF = 0;
    double pcentF = 0;
    char sexo;

    for (int i = 1; i <= 100; i++) {
        printf("Digite a idade desse atleta: ");
        scanf("%d", &idade);

        if (idade >= 0) {
            somaIdade += idade;
            printf("Digite o sexo desse atleta (m para masculino / f para feminino): ");
            scanf(" %c", &sexo);

            switch(sexo) {
                case 'm':
                    somaIdadeM += idade;
                    printf("Digite a altura desse atleta: ");
                    scanf("%f", &altura);
                    if (altura > maiorM) {
                        maiorM = altura;
                    }
                    printf("Digite o peso desse atleta: ");
                    scanf("%f", &peso);
                    qteM++;
                    break;
                case 'f':
                    printf("Digite a altura dessa atleta: ");
                    scanf("%f", &altura);
                    printf("Digite o peso dessa atleta: ");
                    scanf("%f", &peso);
                    if (peso > pesoF) {
                        pesoF = peso;
                    }
                    qteF++;
                    break;
                default:
                    printf("Tente novamente.\n");
            }
        } else {
            /* 
            Declarei variáveis para as médias e as
            calculei dessa forma pois, ao fazer o cálculo da média
            diretamente no printf, estava tendo conflito de especificador de formato,
            pois usei o %f (julgando que algumas divisões poderiam resultar em casas decimais)
            e todos os argumentos envolvidos na divisão são inteiros, não conseguindo
            compilar o programa.
            */
            if ((qteM + qteF) != 0) {
                mediaIdade = (float)somaIdade / (qteM + qteF);
                pcentF = ((double)qteF / (qteM + qteF)) * 100;
            }
            if (qteM != 0) {
                mediaIdadeM = (float)somaIdadeM / qteM;
            }
            printf("Altura do atleta do sexo masculino mais alto: %.2f\n", maiorM);
            printf("Peso da atleta do sexo feminino mais pesada: %.2f\n", pesoF);
            printf("Média de idade dos atletas: %.1f\n", mediaIdade);
            printf("Média de idade dos atletas do sexo masculino: %.1f\n", mediaIdadeM);
            printf("Percentual de atletas do sexo feminino da olimpíada: %.2lf%%\n", pcentF);
            break;
        }
        printf("\n");
    }

    return 0;
}