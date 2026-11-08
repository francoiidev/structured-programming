#include <stdio.h>
 
void lerVet(float v[]) {
    for (int i = 0; i < 100; i++) {
        scanf("%f", &v[i]);
    }
}

void verificarVet(float v[]) {
    for (int i = 0; i < 100; i++) {
        if (v[i] <= 10) {
            printf("A[%d] = %.1f\n", i, v[i]);
        }
    }
}

int main() {
    float v[100];
    
    lerVet(v);
    
    verificarVet(v);
    
    return 0;
}