#include <stdio.h>

int main() {                    //o enunciado estava errado!? acresvcentei a questao 8 no lugar da 7 
    int vetor[10];
    int i;

    // vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    //pares e suas posicoses
    printf("\nnumeros pares e suas posicoes:");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            printf("Posicao %d = %d", i, vetor[i]);
        }
    }

    return 0;
}
