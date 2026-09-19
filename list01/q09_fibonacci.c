#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    n1 = 0;
    n2 = 1;

    while (n1 <= 144) {
        printf("%d ", n1);
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    printf("\n");

    return 0;
}