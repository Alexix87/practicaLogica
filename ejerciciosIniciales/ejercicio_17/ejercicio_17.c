#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXIMO_DE_TABLA 20

void inicializarTabla(int cantidadEquipos, int tabla[MAXIMO_DE_TABLA][MAXIMO_DE_TABLA]){
    for (int i = 0; i< cantidadEquipos; i++){
        for (int j = 0; j< cantidadEquipos; j++){    
            tabla[i][j] = 0;
        }
    }
}

void simularResultado(int tabla[MAXIMO_DE_TABLA][MAXIMO_DE_TABLA], int equipo1, int equipo2){
    int resultado;
    int puntosParaEquipo1,puntosParaEquipo2;
    
    resultado = rand()%3;

    switch (resultado){
        case 0:
            puntosParaEquipo1=1;
            puntosParaEquipo2=1;
        break;
        case 1:
            puntosParaEquipo1=3;
            puntosParaEquipo2=0;
            break;
        case 2:
            puntosParaEquipo1=0;
            puntosParaEquipo2=3;
        break;
    }

    tabla[equipo1][equipo2] = puntosParaEquipo1;
    tabla[equipo2][equipo1] = puntosParaEquipo2;
}

void simularResultados(int cantidadEquipos, int tabla[MAXIMO_DE_TABLA][MAXIMO_DE_TABLA]){
    srand(time(NULL));
    for(int i=0; i<cantidadEquipos-1; i++){
        for(int j=i; j<cantidadEquipos; j++){
            if (i!=j) simularResultado(tabla,i,j);
        }
    }
}

void mostrarTablaConPuntaje(int cantidadEquipos, int tabla[MAXIMO_DE_TABLA][MAXIMO_DE_TABLA]){
    int cantidadDePuntos;    
    for (int i = 0; i< cantidadEquipos; i++){
        cantidadDePuntos = 0;
        for (int j = 0; j< cantidadEquipos; j++){
            printf("%d \t",tabla[i][j]);
            cantidadDePuntos += tabla[i][j];
        }
        printf("\t %d \n",cantidadDePuntos);
    }
}

int main(){

    int cantidadEquipos;
    int tabla[MAXIMO_DE_TABLA][MAXIMO_DE_TABLA];

    do{
        printf("Ingresar cantidad de equipos (maximo %d): ",MAXIMO_DE_TABLA);
        scanf("%d",&cantidadEquipos);
    }while(cantidadEquipos>MAXIMO_DE_TABLA);

    inicializarTabla(cantidadEquipos,tabla);
    simularResultados(cantidadEquipos,tabla);
    mostrarTablaConPuntaje(cantidadEquipos,tabla);

    system("pause");
    return 0;
}