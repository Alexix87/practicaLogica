#include <stdio.h>
#include <stdlib.h>

int main(){

    int m;
    int valor = 0;

    printf("ingrese cantidad de valores que quiere: ");
    scanf("%d",&m);

    while(m>0){
        int encontrado = 0;
        while(!encontrado){
            if( (valor%3 == 0) && (valor%5 != 0) ){
                encontrado = 1;
                printf("valor encontrado: %d \n",valor);
            }
            valor++;            

        }
        m--;
    }

    system("pause");
    return 0;
}