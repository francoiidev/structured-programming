#include <stdio.h>

void printVet(double v[]) {
    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, v[i]);
    }
}

void reduz(double n) {
    double nz[100];
    
    nz[0] = n;
    
    for(int i = 1; i < 100; i++) {
        nz[i] = nz[i - 1] / 2;
    }
    
    printVet(nz);
}

int main() {
    double num;
    scanf("%lf", &num);
    
    reduz(num);
 
    return 0;
}