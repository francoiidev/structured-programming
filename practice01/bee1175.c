#include <stdio.h>
 
void lerVet(int v[]) {
    for (int i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
    }
}

void imprimirVet(int v[]) {
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }
}

void trocarVet(int v[]) {
    int u[20];
    
    int i = 19, j = 0;
    
    while(j < 20) {
        u[j] = v[i];
        i--;
        j++;
    }
    
    imprimirVet(u);
}
 
int main() {
    int n[20];
    
    lerVet(n);
    
    trocarVet(n);
 
    return 0;
}