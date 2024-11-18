#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;

    scanf("%d", &tamanho);

    vetor = (int*)malloc(tamanho*sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    if(tamanho <= 0)
        printf("[vazio]");
    
    printf("[");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
    printf("]");

    free(vetor);

    return 0;
}
