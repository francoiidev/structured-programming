#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char opcao;
    printf("=====CALCULADORA=====\n");
    printf("+ - Adição\n");
    printf("- - Subtração\n");
    printf("* - Multiplicação\n");
    printf("/ - Divisão\n");
    printf("=====================\n");
    /* Com as opções definidas com caracteres especiais, evita que
    o usuário escreva uma letra maiúscula ou minúscula diferente das opções fornecidas,
    pois C é case-sensitive (diferencia letras maiúsculas de minúsculas)
    */
    printf("Digite a opção escolhida:\n");
    scanf(" %c", &opcao);

    if (opcao == '+') {
        printf("Opção escolhida: Adição\n");
        printf("Digite os dois números que serão utilizados na operação:\n");
        scanf("%f %f", &num1, &num2);
        resultado = num1 + num2;
        printf("O resultado da adição %.1f mais %.1f é igual a %.1f.\n", num1, num2, resultado);
    } else if (opcao == '-') {
        printf("Opção escolhida: Subtração\n");
        printf("Digite os dois números que serão utilizados na operação:\n");
        scanf("%f %f", &num1, &num2);
        resultado = num1 - num2;
        printf("O resultado da subtração %.1f menos %.1f é igual a %.1f.\n", num1, num2, resultado);
    } else if (opcao == '*') {
        printf("Opção escolhida: Multiplicação\n");
        printf("Digite os dois números que serão utilizados na operação:\n");
        scanf("%f %f", &num1, &num2);
        resultado = num1 * num2;
        printf("O resultado da multiplicação %.1f vezes %.1f é igual a %.1f.\n", num1, num2, resultado);
    } else if (opcao == '/') {
        printf("Opção escolhida: Divisão\n");
        printf("Digite os dois números que serão utilizados na operação:\n");
        scanf("%f %f", &num1, &num2);
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("O resultado da divisão %.1f por %.1f é igual a %.1f.\n", num1, num2, resultado);
        } else {
            printf("Uma divisão por 0 não é possível.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}