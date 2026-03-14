#include <stdio.h>

int main() {
    float valores[5], soma = 0;
    float maior = -99999, menor = 99999;
    
    printf("Digite 5 valores:\n");
    for(int i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%f", &valores[i]);
        soma += valores[i];
        
        if(valores[i] > maior) maior = valores[i];
        if(valores[i] < menor) menor = valores[i];
    }
    
    printf("\nValores lidos: ");
    for(int i = 0; i < 5; i++) {
        printf("%.2f ", valores[i]);
    }
    printf("\nMaior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / 5);
    
    return 0;
}