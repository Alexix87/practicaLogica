#include <stdlib.h>
#include <stdio.h>

typedef struct{
    long int aaaammdd;
} tFecha;

int formatearFecha(int aaaa,int mm, int dd){
    return dd + mm*100 + aaaa*10000;
}

void ingresarFecha(tFecha *unaFecha){
    int aaaa,mm,dd;
    
    printf("Anio: ");
    scanf("%d",&aaaa);
    printf("Mes: ");
    scanf("%d",&mm);
    printf("Dia: ");
    scanf("%d",&dd);

    unaFecha->aaaammdd = formatearFecha(aaaa,mm,dd);
}

int compararFecha(tFecha unaFecha, tFecha otraFecha){
    return (unaFecha.aaaammdd < otraFecha.aaaammdd)?-1:1;
}

void mostrarUnaFecha(tFecha unaFecha){
    int aaaa,mmdd,mm,dd;

    aaaa = unaFecha.aaaammdd / 10000;
    mmdd = unaFecha.aaaammdd % 10000;
    mm = mmdd / 100;
    dd = mmdd % 100;

    printf("%d/%d/%d",aaaa,mm,dd);
}

void mostrarOrdenado(tFecha fechaMenor, tFecha fechaMayor){
    printf("Las fechas en orden creciente son: \n");
    mostrarUnaFecha(fechaMenor);
    printf("\t");
    mostrarUnaFecha(fechaMayor);
    printf("\n");
}

int main(){

    tFecha fecha1,fecha2;

    ingresarFecha(&fecha1);
    ingresarFecha(&fecha2);
    switch (compararFecha(fecha1,fecha2)){
    case -1:
        mostrarOrdenado(fecha1,fecha2);
        break;
    
    case 1:
        mostrarOrdenado(fecha2,fecha1);
        break;
    }

    system("pause");
    return 0;
}