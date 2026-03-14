#include <stdio.h>

int main() {
    int vetor[15], compactado[15], n = 15, nc = 0;
    
    printf("Digite 15 valores:\n");
    for(int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }
    
    // Compacta removendo zeros
    for(int i = 0; i < 15; i++) {
        if(vetor[i] != 0) {
            compactado[nc++] = vetor[i];
        }
    }
    
    printf("Vetor compactado (%d elementos): ", nc);
    for(int i = 0; i < nc; i++) {
        printf("%d ", compactado[i]);
    }
    printf("\n");
    
    return 0;
}