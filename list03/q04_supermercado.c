#include <stdio.h>

void leData (int * a, int * b, int * c) {
    while(1) {
        do {
            scanf("%d %d %d", a, b, c);
        } while ((*a < 1 || *a > 31) || (*b < 1 || *b > 12) || (*c < 1990));

        if ((*a > 29) && (*b == 2)) {
            continue;
        }

        if ((*a > 30) && ((*b == 4) || (*b == 6) || (*b == 9) || (*b == 11))) {
            continue;
        }

        if ((*a == 29) && (*b == 2) && ((*c % 4) != 0)) {
            // se tem o dia 29 no mes de fevereiro, deve ser um ano bissexto.
            continue;
        }

        break;
    }
}

int verificarVencimento(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    if (ano2 < ano1) {
        return 1;
    } else if (ano2 == ano1 && mes2 < mes1) {
        return 1;
    } else if (ano2 == ano1 && mes2 == mes1 && dia2 < dia1) {
        return 1;
    } else {
        return 0;
    }
}

void calculaMulta(int a, int b) {
    if (a == 0) {
        printf("SEM MULTA\n");
    } else if (a < (b * 0.1)) {
        printf("R$ 10000.00\n");
    } else if ((a > (b * 0.1)) && (a < (b * 0.3))) {
        printf("R$ 30000.00\n");
    } else {
        printf("R$ 100000.00\n");
    }
}

int main(){
    int dVis, mVis, aVis;
    int dVal, mVal, aVal;
    int contV = 0;
    int contT = 0;
    int cod;

    printf("Digite a data da visita: ");
    leData(&dVis, &mVis, & aVis);
    
    while(1){
        printf("Digite o codigo: ");
        scanf("%d", &cod);

        if (cod < 0) break;

        printf("Digite a data de validade: ");
        leData(&dVal, &mVal, &aVal);

        if (verificarVencimento(dVis, mVis, aVis, dVal, mVal, aVal) == 1) { //1 - vencido e 0 - nao vencido
            //produto vencido
            printf("FORA DA VALIDADE\n");
            contV++;
        } else {
            //produto está na validade
            printf("VALIDADE OK\n");
        }
        contT++;
    }
    calculaMulta(contV, contT);
    return 0;
}