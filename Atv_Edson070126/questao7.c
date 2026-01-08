#include <stdio.h>

int main() {
    char nome[11];  //vi q usar char nome[10] pode causar erro, pois nao ha espaço para o caractere nulo '\0', necessario para indicar o fim da string
    int i, contador = 0;

    printf("Digite um nome (ate 10 letras): ");
    scanf("%10s", nome);

    for (i = 0; nome[i] != '\0'; i++) {
        if (nome[i] == 'A' || nome[i] == 'a') {
            contador++;
        }
    }

    printf("o nome possui %d letra(s) A ou a.", contador);

    return 0;
}
