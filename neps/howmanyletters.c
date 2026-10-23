#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){    	
    char str[51];
    int cont = 0;

    scanf("%s", str);

    char busca;

    scanf(" %c", &busca);

    for (int i = 0; i < strlen(str); i++) {
        if (busca == str[i]) {
            cont++;
        }
    }

    printf("%d\n", cont);

    return 0;
}
