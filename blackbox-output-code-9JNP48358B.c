#include <stdio.h>

int main() {
    float valores[5];
    float maior = -99999, menor = 99999;
    int pos_maior = -1, pos_menor = -1;
    
    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%f", &valores[i]);
        
        if(valores[i] > maior) {
            maior = valores[i];
            pos_maior = i;
        }
        if(valores[i] < menor) {
            menor = valores[i];
            pos_menor = i;
        }
    }
    
    printf("Posicao do maior valor (%.2f): %d\n", maior, pos_maior);
    printf("Posicao do menor valor (%.2f): %d\n", menor, pos_menor);
    
    return 0;
}