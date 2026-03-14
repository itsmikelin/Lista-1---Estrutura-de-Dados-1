#include <stdio.h>

int main() {
    int numeros[6], pares[6], impares[6];
    int soma_pares = 0, qtd_impares = 0, idx_pares = 0, idx_impares = 0;
    
    printf("Digite 6 numeros inteiros:\n");
    for(int i = 0; i < 6; i++) {
        printf("Numero %d: ", i+1);
        scanf("%d", &numeros[i]);
        
        if(numeros[i] % 2 == 0) {
            pares[idx_pares++] = numeros[i];
            soma_pares += numeros[i];
        } else {
            impares[idx_impares++] = numeros[i];
            qtd_impares++;
        }
    }
    
    printf("\nNumeros pares: ");
    for(int i = 0; i < idx_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\nSoma dos pares: %d\n", soma_pares);
    
    printf("Numeros impares: ");
    for(int i = 0; i < idx_impares; i++) {
        printf("%d ", impares[i]);
    }
    printf("\nQuantidade de impares: %d\n", qtd_impares);
    
    return 0;
}