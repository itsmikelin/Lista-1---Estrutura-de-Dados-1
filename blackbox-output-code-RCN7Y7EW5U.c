#include <stdio.h>

int main() {
    float original[10], quadrado[10];
    
    printf("Digite 10 numeros reais:\n");
    for(int i = 0; i < 10; i++) {
        printf("Numero %d: ", i+1);
        scanf("%f", &original[i]);
        quadrado[i] = original[i] * original[i];
    }
    
    printf("\nVetor original:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", original[i]);
    }
    printf("\n");
    
    printf("Vetor quadrado:\n");
    for(int i = 0; i < 10; i++) {
        printf("%.2f ", quadrado[i]);
    }
    printf("\n");
    
    return 0;
}