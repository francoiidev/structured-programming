#include <stdio.h>
#include <string.h>

int main() {
    char pal1[30], pal2[30];
    int cont;

    printf("Digite a palavra 1 (máx. 29 caracteres): ");
    scanf("%s", pal1);
    printf("Digite a palavra 2 (máx. 29 caracteres): ");
    scanf("%s", pal2);
    
    int comp = strlen(pal2);

    if (strlen(pal2) == strlen(pal1)) {
        for(int i = 0; i < comp; i++) {
            for (int j = 0; j < comp; j++) {
                if (pal1[j] == '*') {
                    continue;
                }
                if (pal2[i] == pal1[j]) {
                    pal1[j] = '*';
                    break;
                }
            }
        }

        for (cont = 0; cont < comp; cont++) {
            if (pal1[cont] == '*') {
                continue;
            } else {
                printf("A palavra 2 não é um anagrama da palavra 1.\n");
                return 0;
            }
        }

        if (cont == comp) {
            printf("A palavra 2 é um anagrama da palavra 1.\n");
            return 0;
        }
    } else {
        printf("A palavra 2 não é um anagrama da palavra 1.\n");
        return 0;
    }
}