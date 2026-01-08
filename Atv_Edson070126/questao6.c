#include <stdio.h>

int main() {
    int quantidade, i, y;
    int pares = 0, impares = 0, primos = 0;
    int primo;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    // pares e inpares
    for (i = 1; i <= quantidade; i++) {
        if (i % 2 == 0)
            pares++;
        else
            impares++;
    }

    // primos
    for (i = 2; i <= quantidade; i++) {
        primo = 1;

        for (y = 2; y < i; y++) {
            if (i % y == 0) {
                primo = 0;
                break;
            }
        }

        if (primo == 1)
            primos++;
    }

    printf("Numeros pares: %d\n", pares);
    printf("Numeros impares: %d\n", impares);
    printf("Numeros primos: %d\n", primos);

    return 0;
}
