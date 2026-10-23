#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int v[10], u[10], busca, cont = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    scanf("%d", &busca);

    for (int i = 0; i < 10; i++) {
        if (v[i] == busca) {
            u[cont] = i;
            cont++;
        }
    }

    if (cont == 0) {
        printf("Mia x\n");
    } else {
        printf("%d\n", cont);
        
        for (int i = 0; i < cont; i++) {
            printf("%d ", u[i]);
        }
    
        printf("\n");
    }

    return 0;
}
