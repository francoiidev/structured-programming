#include <stdio.h>
#include <stdlib.h>

void fibonacci(int * a) {
    int aux = *a;

    int numero = 1;

    int num = 0, numA = 1, numAA = 0;

    if (*a == 0) {
        *a = 1;
    } else if (*a == 1) {
        *a = 1;
    } else {
        
        for (int i = 1; i <= aux; i++) {
            num = numA + numAA;
            numAA = numA;
            numA = num;
        }

        *a = num;
    }
}

int main(){
    int n;

    scanf("%d", &n);

    fibonacci(&n);

    printf("%d\n", n);

    return 0;
}