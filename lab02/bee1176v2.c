#include <stdio.h>
#include <stdint.h>
 
uint64_t fib[60];
 
void fibonacci(int tst) {
    int n;
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < 60; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    for (int i = 1; i <= tst; i++) {
        scanf("%d", &n);
        printf("Fib(%d) = %ld\n", n, fib[n]);
    }
}
 
int main() {
    int tests;
    scanf("%d", &tests);
    
    fibonacci(tests);
 
    return 0;
}