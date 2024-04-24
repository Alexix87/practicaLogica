#include <stdlib.h>
#include <stdio.h>

int datosValidos(int mes,int anio){
    if (mes>0 && mes<13 && anio>0) return 1;
    return 0;
}

int anioBisiesto(int anio){
 /* si es divisible por 4
 o
 si es divisible por 100 y por 400 
*/
    if ((anio%4 == 0) || (anio%100 == 0 && anio%400 == 0 )) return 1;
    return 0;
}

int cantidadDiasFebreroSegunAnio(int anio){
    if (anioBisiesto(anio)) return 29;
    return 28;
}

int main(){
    int mes, anio;
    int diasPorMes[12] = {31,0,31,30,31,30,31,31,30,31,30,31};

    do{
        printf("Ingrese mes y anio:\n");
        scanf("%d %d",&mes,&anio);
    }while (!datosValidos(mes,anio));

    printf ("La cantidad de dias del mes %d del anio %d es: ",mes,anio);
    if (mes==2) printf("%d\n",cantidadDiasFebreroSegunAnio(anio));
    else printf("%d\n",diasPorMes[mes-1]);
    
    system("pause");
    return 0;
}