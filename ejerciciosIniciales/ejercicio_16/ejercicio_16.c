#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANTIDAD_NUMEROS 50              

int obtenerUnRandom(){
    int valor = rand()%1000;
    int signo = rand()%2;
    int modificadorSigno[2] = {-1,1};
    return valor*modificadorSigno[signo];
}

int main(){
    int unRandom;
    int contadorMayoresACien = 0;
    int acumuladorMayoresACien = 0;
    int acumuladorMenoresAMenosDiez = 0;
    float promedio;

    srand(time(NULL));

    for(int i=0; i<CANTIDAD_NUMEROS; i++){
        unRandom = obtenerUnRandom();
        printf("%d \n",unRandom);

        if (unRandom > 100){
            acumuladorMayoresACien = acumuladorMayoresACien + unRandom;
            contadorMayoresACien++;
        }else   
            if (unRandom < -10) acumuladorMenoresAMenosDiez = acumuladorMenoresAMenosDiez + unRandom;
    }

    promedio = (contadorMayoresACien!=0) ?  (float)acumuladorMayoresACien/contadorMayoresACien : 0;
    printf("El promedio de los mayores a cien es: %.2f \n",promedio);
    printf("La suma de los menores a menos diez es: %d \n",acumuladorMenoresAMenosDiez);

    system("pause");
    return 0;
}