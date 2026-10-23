#include <stdio.h>
#include <stdlib.h>

void ehPar(int a, int b) {
    if ((a + b) % 2 == 0) {
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }
}

int main(){
    // Lendo a entrada do exercício
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    // Seu código vai aqui
    ehPar(B, C);

    return 0;
}