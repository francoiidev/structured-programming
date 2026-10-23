#include <stdio.h>
#include <stdlib.h>

void fatorial(int *a) {
    int cont = *a;

    if (*a == 0) {
        *a = 1;
    } else {
        int aux = *a;
        for (int i = 1; i < cont; i++) {
            *a = *a * (aux - 1);
            aux--;
        }
    }
}

int main(){    	
    int num;

    scanf("%d", &num);

    fatorial(&num);
    
    printf("%d\n", num);

    return 0;
}