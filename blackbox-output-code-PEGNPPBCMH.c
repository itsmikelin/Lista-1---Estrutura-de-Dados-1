#include <stdio.h>

int main() {
    int a[5], y[5];
    
    printf("Digite 5 elementos do vetor A:\n");
    for(int i = 0; i < 5; i++) scanf("%d", &a[i]);
    
    printf("Digite 5 elementos do vetor Y:\n");
    for(int i = 0; i < 5; i++) scanf("%d", &y[i]);
    
    // Soma
    printf("Soma: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i] + y[i]);
    }
    printf("\n");
    
    // Produto
    printf("Produto: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", a[i] * y[i]);
    }
    printf("\n");
    
    // Diferenca (elementos de A que nao estao em Y)
    printf("Diferenca: ");
    for(int i = 0; i < 5; i++) {
        int existe = 0;
        for(int j = 0; j < 5; j++) {
            if(a[i] == y[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) printf("%d ", a[i]);
    }
    printf("\n");
    
    // Intersecao
    printf("Intersecao: ");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(a[i] == y[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
    
    // Uniao
    printf("Uniao: ");
    int uniao[10], nu = 0;
    for(int i = 0; i < 5; i++) uniao[nu++] = a[i];
    for(int i = 0; i < 5; i++) {
        int existe = 0;
        for(int j = 0; j < 5; j++) {
            if(y[i] == a[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) uniao[nu++] = y[i];
    }
    for(int i = 0; i < nu; i++) {
        printf("%d ", uniao[i]);
    }
    printf("\n");
    
    return 0;
}