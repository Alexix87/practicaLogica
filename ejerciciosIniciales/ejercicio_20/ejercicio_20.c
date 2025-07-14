#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANTIDAD_DE_VALORES 10

int main(){
    int unValor;
    int maximo;
    srand(time(NULL));

    unValor = rand();
    maximo = unValor;
    printf("%d\t",unValor);

    for (int i=1; i<CANTIDAD_DE_VALORES; i++){
        unValor = rand();
        if (unValor>maximo) maximo = unValor;
        printf("%d\t",unValor);
    }

    printf("\nEl valor maximo es: %d\n",maximo);

    system("pause");
    return 0;
}