#include <stdio.h>

int main() {
    float notas[4];
    float media;
    float soma;

    for(int i =0; i < 4; i++){
    printf("Digite as notas:");
    scanf("%f", &notas);
    }
    
    for(int i = 0; i < 4; i++){
        soma+= notas[i];
    }

    media = soma / 4;

    printf("Soma das Notas: %.2f\n",soma);
    printf("Media: %.2f\n", media);

    return 0;
}   