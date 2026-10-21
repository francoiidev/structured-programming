#include <stdio.h>
#include <string.h>

int ehPalindromo (char v[]) {
    char pal2[21];
    int comp = strlen(v);
    int i = 0, j = comp - 1;

    while(1) {
        if (i > comp || j < 0) {
            break;
        }

        pal2[i] = v[j];

        i++;
        j--;
    }

    if (strcmp(pal2, v) == 0) 
        return 1;
    else
        return 0;
}

int main() {
    char pal1[21];
    printf("Escreva a palavra a ser analisada: ");
    scanf("%s", pal1);

    if (ehPalindromo(pal1) == 1) {
        printf("A palavra %s é um palíndromo.\n", pal1);
    } else {
        printf("A palavra %s não é um palíndromo.\n", pal1);
    }

    return 0;
}