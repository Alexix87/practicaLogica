#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMA_CANTIDAD 20
#define MAXIMA_LONGITUD 10
#define FIN "fin"

/*
dado un conjunto de nombres y fechas de nacimiento (ddmmaaaa)
finaliza cuando se ingresa el nombre "fin"
informarmar el mas viejo y el mas joven
*/

int ingresoDeDatos(char nombres[MAXIMA_CANTIDAD][MAXIMA_LONGITUD], int fechas[MAXIMA_CANTIDAD]){
    char unNombre[MAXIMA_LONGITUD];
    int i = 0;

    printf("ingrese nombre: ");
    scanf("%s",unNombre);
    while(strcmp(unNombre,FIN)){
        strcpy(nombres[i],unNombre);
        printf("ingrese fecha de nacimiento: ");
        scanf("%d",&fechas[i]);
        i++;
        printf("ingrese nombre: ");
        scanf("%s",unNombre); 
    }
    return i;
}

int dameAnio(int unaFecha){
    return unaFecha%10000;
}

int dameMes(int unaFecha){
    return (unaFecha/10000)%100;
}

int dameDia(int unaFecha){
    return (unaFecha/1000000)%100;
}

int primeroMenor(int unaFecha, int otraFecha){
    int anio_1 = dameAnio(unaFecha);
    int mes_1 = dameMes(unaFecha);
    int dia_1 = dameDia(unaFecha);

    int anio_2 = dameAnio(otraFecha);
    int mes_2 = dameMes(otraFecha);
    int dia_2 = dameDia(otraFecha);

    int resultado = 0;

    if (anio_1 > anio_2) {
        resultado = 1;
    }else{
        if (anio_1 == anio_2){
            if (mes_1 > mes_2) resultado = 1;
            else{
                if(mes_1 == mes_2){
                    if(dia_1 > dia_2) resultado = 1;
                }
            }
        }
    }

    return resultado;
}

void informar(char nombres[MAXIMA_CANTIDAD][MAXIMA_LONGITUD], int fechas[MAXIMA_CANTIDAD],int cantidad){
    int masViejo, masJoven;
    int anioMasViejo,anioMasJoven;

    masViejo = 0; masJoven = 0;
    anioMasViejo = fechas[0];
    anioMasJoven = fechas[0];

    for (int i = 1; i<cantidad; i++){
        if (primeroMenor(fechas[i],anioMasJoven)){
            masJoven = i;
            anioMasJoven = fechas[i];
        }
        if (primeroMenor(anioMasViejo,fechas[i])){
            masViejo = i;
            anioMasViejo = fechas[i];
        }
    }

    printf("\n");
    printf("El mas viejo es: %s con fecha: %d \n",nombres[masViejo],fechas[masViejo]);
    printf("El mas joven es: %s con fecha: %d \n",nombres[masJoven],fechas[masJoven]);
}

int main(){
    char nombres[MAXIMA_CANTIDAD][MAXIMA_LONGITUD];
    int fechas[MAXIMA_CANTIDAD];
    
    int cantidad = ingresoDeDatos(nombres,fechas);
    informar(nombres,fechas,cantidad);

    system("pause");
    return 0;
}