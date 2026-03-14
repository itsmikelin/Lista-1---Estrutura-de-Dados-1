#include <stdio.h>

int main() {
    float notas[15], soma = 0;
    
    printf("Digite as notas de 15 alunos:\n");
    for(int i = 0; i < 15; i++) {
        printf("Nota aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    printf("Media geral: %.2f\n", soma / 15);
    
    return 0;
}