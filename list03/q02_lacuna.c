#include <stdio.h>

int troca(int * a, int * b) {
    int guarda = *a;
    *a = *b;
    *b = guarda;
}

int main() {
    int x,y;
    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);
    troca(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}