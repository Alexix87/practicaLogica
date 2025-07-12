#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EDAD_TOPE_MENOR 12
#define EDAD_TOPE_CADETE 18
#define EDAD_TOPE_JUVENIL 25

int main(){
    int edad;
    char rta[8];  
    
    printf("Ingresar edad: ");
    scanf("%d",&edad);

    if (edad <= EDAD_TOPE_MENOR) strcpy(rta,"Menor");
    else 
        if (edad <= EDAD_TOPE_CADETE) strcpy(rta,"Cadete");
        else    
            if (edad <= EDAD_TOPE_JUVENIL) strcpy(rta,"Juvenil");
            else strcpy(rta,"Mayor");

    printf("Con la edad de %d anios, esta en la categoria: %s\n",edad,rta);
    system("pause");
    return 0;
}