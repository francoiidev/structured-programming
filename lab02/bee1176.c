#include <stdio.h>
 
int main() {
    unsigned int v[60];
    int num, it;

    v[0] = 0;
    v[1] = 1;
    
    for (int i = 2; i < 60; i++) {
        v[i] = v[i - 1] + v[i - 2];
    }

    scanf("%d", &it);

    for (int i = 1; i <= it; i++) {
        scanf("%d", &num);

        printf("Fib(%d) = %u\n", num, v[num]);
    }

    return 0;
}