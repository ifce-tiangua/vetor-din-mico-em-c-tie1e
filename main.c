#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*)malloc(tamanho*sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nOs dados do vetor são:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: %d\n", i + 1, vetor[i]);
    }

    free(vetor);

    return 0;
}
