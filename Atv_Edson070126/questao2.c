#include <stdio.h>

int main(){
     
    char nome[60];
    float preco;
    float precoFinal;

    printf("Digite o nome do produto;");
    scanf("%s",nome );

    printf("Digite o preco do produto:");
    scanf("%f", &preco);

    precoFinal = preco * 0.90;

    printf("Produto: %s", nome);
    printf("Preco sem desconto: RS %.2f\n", preco);
    printf("Preco a vista com desconto de 10%%: RS %.2f\n", precoFinal);



}