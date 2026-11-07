#include <stdio.h>

int main() {
    int v[10];

    for(int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        if (v[i] < 1) {
            v[i] = 1;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, v[i]);
    }

    return 0;
}