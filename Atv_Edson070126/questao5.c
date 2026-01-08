#include <stdio.h>

int main(){
    int i, y;
    int contador = 0;
    int primo;

    for (i = 2; i <= 1000; i++){
        primo = 1;

        for (y = 2; y < i; y++){   //verifica se é divisivel
            if (i % y== 0){
                primo = 0;  //nao e prim
                break;
            }
        }
        if(primo == 1){             // se for incrementa on contador
            contador++;
        }
    }
    printf("Tem %d numeros primos de 1 a 1000", contador);

    return 0;
}