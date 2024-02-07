#include <stdio.h>
#include <stdlib.h>
#include "misFunciones.h"

int main(){
    int a,b;
    printf("ingresar un numero: ");
    scanf("%d",&a);
    printf("\ningrese otro numero: ");
    scanf("%d",&b);

    printf("\nLa suma es: %d",sumar(a,b));
    system("pause");
    return 0;
}