#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int v[10], busca;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    
    scanf("%d", &busca);
    
    int i;
    
    for (i = 0; i < 10; i++) {
        if (busca == v[i]) {
            printf("SIM\n");
            return 0;
        }
    }

    printf("NAO");
    
    return 0;
}
