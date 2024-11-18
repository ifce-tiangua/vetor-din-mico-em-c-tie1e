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

    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }

    free(vetor);

    return 0;
}
