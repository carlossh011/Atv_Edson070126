#include <stdio.h>

int main(){
    int i;
    int contador = 0;

    for (i = 1; i <= 1000; i++){
        if( i % 2 !=0){    // verifica se é diferente de 0 
            contador++; 

        }
    }
    printf("Tem %d numeros impares de 1 a 1000", contador);

    return 0;
}