#include <stdio.h>
 
void separarCedulas(int preco) {
     int dinheiro[7] = {1, 2, 5, 10, 20, 50, 100};
     int resultado[7];

     printf("%d\n", preco);
     
     for (int i = 6; i >= 0; i--) {
         resultado[i] = preco / dinheiro[i];
         preco %= dinheiro[i];
     }
     
     for(int i = 6; i >= 0; i--) {
         printf("%d nota(s) de R$ %d,00\n", resultado[i], dinheiro[i]);
     }
}
 
int main() {
    int preco;
    scanf("%d", &preco);
    
    separarCedulas(preco);
 
    return 0;
}