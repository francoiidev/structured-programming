#include <stdio.h>

void printVet(int M[]) {
    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, M[i]);
    }
}

void fazerVet(int L) {
    int N[1000];
    
    int K = L - 1;
    
    for (int i = 0; i < 1000;) {
        for (int j = 0; j <= K; j++) {
            N[i] = j;
            i++;
            if (i == 1000) {
                break;
            }
        } 
    }
    
    printVet(N);
}

int main() {
    int T;
    
    scanf("%d", &T);
    
    fazerVet(T);
 
    return 0;
}