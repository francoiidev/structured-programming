#include <stdio.h>
 
int main() {
    int num, v[10];

    scanf("%d", &num);

    v[0] = num;

    for(int i = 1; i < 10; i++) {
        v[i] = v[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }
 
    return 0;
}