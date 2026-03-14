#include <stdio.h>

int main() {
    int vetor[10], num;
    int pos = 0;
    
    printf("Digite 10 numeros DIFERENTES:\n");
    while(pos < 10) {
        printf("Numero %d: ", pos+1);
        scanf("%d", &num);
        
        int existe = 0;
        for(int i = 0; i < pos; i++) {
            if(vetor[i] == num) {
                existe = 1;
                break;
            }
        }
        
        if(!existe) {
            vetor[pos++] = num;
        } else {
            printf("Numero ja existe! Digite outro.\n");
        }
    }
    
    printf("Vetor final: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}