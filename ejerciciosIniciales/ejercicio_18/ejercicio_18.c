#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CANTIDAD_DE_RANGOS 4

int main(){
    int acumuladorPorRangos[CANTIDAD_DE_RANGOS] = {0,0,0,0};
    float unSueldo;

    printf("Ingrese Sueldo:");
    scanf("%f", &unSueldo);

    while(unSueldo!=0){
        if(unSueldo<2000.0) acumuladorPorRangos[0]++;
        else
            if(unSueldo<3000.0) acumuladorPorRangos[1]++;
            else   
                if(unSueldo<5000.0) acumuladorPorRangos[2]++;
                else acumuladorPorRangos[3]++;
        fflush(stdin);
        printf("\nIngrese Sueldo:");
        scanf("%f", &unSueldo);
    }
    
    printf("\nCANTIDADES:\n");
    printf("menos de 2000: %d \n",acumuladorPorRangos[0]);
    printf("entre 2000 y 3000: %d \n",acumuladorPorRangos[1]);
    printf("entre 3000 y 5000: %d \n",acumuladorPorRangos[2]);
    printf("mas de 5000: %d \n",acumuladorPorRangos[3]);

    system("pause");
    return 0;
}