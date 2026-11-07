#include <stdio.h>

void scanVector(int v[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
}

void checkVector(int v[]) {
    for(int i = 0; i < 10; i++) {
        if (v[i] < 1) {
            v[i] = 1;
        }
    }
}

void printVector(int v[]) {
    for (int i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, v[i]);
    }
}

int main() {
    int v[10];

    scanVector(v);
    
    checkVector(v);

    printVector(v);

    return 0;
}