#include <stdio.h>

int main(){
    int i;
    int contador = 0;

    for (i = 1; i <= 1000; i++){
        if( i % 2 ==0){
            contador++; //adc mais 1

        }
    }
    printf("Tem %d numeros pares de 1 a 1000", contador);

    return 0;
}