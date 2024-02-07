#include <stdio.h>
#include <stdlib.h>

int esValido(int unValor){
    return unValor==0 ?0:1;
}

// todo:
// - Dar formato al resultado decimal
// - Mensaje cuando se ingresa 0 en b

int main(){
    int a,b;

    do{
        printf("Ingrese dos valores enteros: ");
        scanf("%d %d",&a,&b);
    }while(!esValido(b));    

    printf("El cociente a/b es: %f\n",(float)a/b);

    system("pause");
    return 0;    
}