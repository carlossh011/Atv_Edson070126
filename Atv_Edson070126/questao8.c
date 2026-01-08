#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }



    //pares
    printf("\nNumeros pares do vetor:");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}
