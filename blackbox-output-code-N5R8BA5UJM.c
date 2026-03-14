#include <stdio.h>

int main() {
    int v1[10], v2[10], intersecao[10];
    int n1 = 0, n2 = 0, ni = 0;
    
    printf("Digite 10 elementos do vetor 1:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &v1[i]);
    
    printf("Digite 10 elementos do vetor 2:\n");
    for(int i = 0; i < 10; i++) scanf("%d", &v2[i]);
    
    // Encontra intersecao
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(v1[i] == v2[j] && n1 == 0) { // n1 evita duplicatas
                intersecao[ni++] = v1[i];
                n1 = 1;
                break;
            }
        }
        n1 = 0;
    }
    
    printf("Intersecao: ");
    for(int i = 0; i < ni; i++) {
        printf("%d ", intersecao[i]);
    }
    printf("\n");
    
    return 0;
}