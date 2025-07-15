#include <stdio.h>
#include <stdlib.h>

int ingresarValor(float *valor){
    printf("Ingrese valor: ");
    scanf("%f",valor);

    if (*valor == 0) return 0;
    else return 1;
}

void asignarValor(float valor, float *maximoNegativo, int *flagMaximoNegativo, float *minimoPositivo, int *flagMinimoPositivo, float *minimoDentroDeRango, int *flagMinimoDentroDeRango, float *acumulador,float MinimoRango,float MaximoRango){
    if (valor < 0){
        if (*flagMaximoNegativo){
            if (valor > *maximoNegativo) *maximoNegativo = valor;
        }else{
            *maximoNegativo = valor;
            *flagMaximoNegativo = 1;
        }
    }else{
        if (*flagMinimoPositivo){
            if (valor < *minimoPositivo) *minimoPositivo = valor;
        }else{
            *minimoPositivo = valor;
            *flagMinimoPositivo = 1;
        }
    }

    if ((valor > MinimoRango) && (valor < MaximoRango)){
        if (*flagMinimoDentroDeRango){
            if (valor < *minimoDentroDeRango) *minimoDentroDeRango = valor;
        }else{
            *minimoDentroDeRango = valor;
            *flagMinimoDentroDeRango = 1;
        }
    }

    *acumulador = *acumulador + valor;
}

void informar(float valor, float maximoNegativo, int flagMaximoNegativo, float minimoPositivo, int flagMinimoPositivo, float minimoDentroDeRango, int flagMinimoDentroDeRango, float promedio,float MinimoRango,float MaximoRango){
    printf("\n");
    printf("RESULTADOS:\n\n");

    if (flagMaximoNegativo) printf("El maximo negativo es: %.2f \n",maximoNegativo);
    else  printf("No hay maximo negativo\n");
    
    if (flagMinimoPositivo) printf("El minimo positivo es: %.2f \n",minimoPositivo);
    else  printf("No hay minimo positivo\n");

    if (flagMinimoDentroDeRango) printf("El minimo dentro del rango [%f;%f] es: %.2f \n",MinimoRango,MaximoRango, minimoDentroDeRango);
    else  printf("No hay minimo dentro del rango [%f;%f] \n",MinimoRango,MaximoRango);

    printf("El promedio es: %.2f \n", promedio);
}

int main(){
    const float MinimoRango = -17.3;
    const float MaximoRango = 26.9;
    float valor;
    float maximoNegativo;
    int flagMaximoNegativo = 0;
    float minimoPositivo;
    int flagMinimoPositivo = 0;
    float minimoDentroDeRango; //-17,3 to 26,9
    int flagMinimoDentroDeRango = 0;
    float acumulador =0;
    int cantidad = 0;

    while (ingresarValor(&valor)){
        asignarValor(valor,&maximoNegativo, &flagMaximoNegativo, &minimoPositivo, &flagMinimoPositivo, &minimoDentroDeRango, &flagMinimoDentroDeRango, &acumulador,MinimoRango,MaximoRango);
        cantidad++;
    } 
    
    if (!cantidad) printf("No se ingresaron valores\n");
    else{
        informar(valor,maximoNegativo, flagMaximoNegativo, minimoPositivo, flagMinimoPositivo, minimoDentroDeRango, flagMinimoDentroDeRango, acumulador/cantidad,MinimoRango,MaximoRango);
    }

    system("pause");
    return 0;
}