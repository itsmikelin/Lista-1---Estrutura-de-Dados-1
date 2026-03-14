#include <stdio.h>

int main() {
    int v1[10], v2[10], uniao[20];
    int n1 = 0;
    
    printf("Digite 10 elementos do vetor 1:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &v1[i]);
    
    printf("Digite 10 elementos do vetor 2:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &v2[i]);
    
    // Copia v1 para uniao
    for(int i = 0; i < 10; i++) {
        uniao[i] = v1[i];
    }
    n1 = 10;
    
    // Adiciona elementos de v2 que nao estao em v1
    for(int i = 0; i < 10; i++) {
        int existe = 0;
        for(int j = 0; j < 10; j++) {
            if(v2[i] == v1[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) {
            uniao[n1++] = v2[i];
        }
    }
    
    printf("Uniao: ");
    for(int i = 0; i < n1; i++) {
        printf("%d ", uniao[i]);
    }
    printf("\n");
    
    return 0;
}