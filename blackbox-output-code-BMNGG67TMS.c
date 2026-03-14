#include <stdio.h>

int main() {
    int vetor[8], X, Y;
    
    printf("Digite 8 valores para o vetor:\n");
    for(int i = 0; i < 8; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite a posicao X (0-7): ");
    scanf("%d", &X);
    printf("Digite a posicao Y (0-7): ");
    scanf("%d", &Y);
    
    printf("Soma das posicoes %d e %d = %d\n", X, Y, vetor[X] + vetor[Y]);
    
    return 0;
}