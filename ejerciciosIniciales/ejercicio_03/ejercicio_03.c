#include <stdio.h>
#include <stdlib.h>

float dividirPor(int unEntero,int divisor){
    return (float) unEntero/divisor;
}

int main(){

    int valorEntero;

    printf("Ingresar un valor entero: ");
    scanf("%d",&valorEntero);

    printf("La quinta parte es: %.2f\n", dividirPor(valorEntero,5));
    printf("El resto al dividir por cinco es: %d\n", valorEntero%5);
    printf("La septima parte de la quinta parte es: %.2f\n", dividirPor(dividirPor(valorEntero,5),7));

    system("pause");
    return 0;
}