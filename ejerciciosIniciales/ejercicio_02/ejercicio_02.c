#include <stdio.h>
#include <stdlib.h>

int esInvalido(int unValor){
    int rst;
    if (unValor == 0){
        printf("ERROR! El segundo numero es cero.\n");
        rst = 0;
    }else{
        rst = 1;
    }
    return rst;
}

int main(){
    int a,b;
    do{
        printf("Ingrese dos valores enteross: ");
        scanf("%d %d",&a,&b);
    }while(!esInvalido(b));    

    // .2 en %f define en dos la cantidad de decimales a mostrar 
    printf("El cociente a/b es: %.2f\n",(float)a/b);

    system("pause");
    return 0;    
}