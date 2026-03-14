#include <stdio.h>

int main() {
    int valores[6];
    
    printf("Digite 6 valores inteiros PARES:\n");
    for(int i = 0; i < 6; i++) {
        do {
            printf("Valor %d (par): ", i+1);
            scanf("%d", &valores[i]);
            if(valores[i] % 2 != 0) {
                printf("ERRO: Digite apenas numeros PARES!\n");
            }
        } while(valores[i] % 2 != 0);
    }
    
    printf("\nValores na ordem inversa:\n");
    for(int i = 5; i >= 0; i--) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    
    return 0;
}