#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma;
    
    // (b) Soma das posições A[0], A[1] e A[5]
    soma = A[0] + A[1] + A[5];
    printf("Soma A[0]+A[1]+A[5] = %d\n", soma);
    
    // (c) Modifica posição 4 para 100
    A[4] = 100;
    
    // (d) Mostra todos os valores do vetor
    printf("\nVetor A:\n");
    for(int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }
    
    return 0;
}