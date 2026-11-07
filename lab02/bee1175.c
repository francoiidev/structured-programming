#include <stdio.h>
 
int main() {
    int v[20], u[20];

    int i = 0, j = 19;

    for(int w = 0; w < 20; w++) {
        scanf("%d", &v[w]);
    }

    for(int w = 1; w <= 10; w++) {
        v[i] = u[j];
        i++;
        j--;
    }

    for(int w = 0; w < 20; w++) {
        printf("N[%d] = %d\n", w, v[w]);
    }
 
    return 0;
}