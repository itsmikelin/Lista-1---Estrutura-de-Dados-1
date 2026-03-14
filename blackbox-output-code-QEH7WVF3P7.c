#include <stdio.h>

int main() {
    int vetor[10], maior = -99999, posicao = -1;
    
    printf("Digite 10 valores:\n");
    for(int i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }
    
    printf("Vetor: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nMaior elemento: %d (posicao %d)\n", maior, posicao);
    
    return 0;
}