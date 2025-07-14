#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int n,mayor,menor,posicionMayor,posicionMenor;
    int unValor;

    printf("ingrese cantidad de valores: ");
    scanf("%d",&n);
    srand(time(NULL));
    
    unValor = rand();
    mayor = unValor;
    menor = unValor;
    posicionMayor = 1;
    posicionMenor = 1;
    printf("%d\t",unValor);

    for (int i=1; i<n; i++){
        unValor = rand();
        if (unValor>mayor){
            mayor = unValor;
            posicionMayor = i+1;
        }
        if (unValor<menor){
            menor = unValor;
            posicionMenor = i+1;
        }
        printf("%d\t",unValor);
    }

    printf("\nmayor: %d \t en posicion: %d\n",mayor,posicionMayor);
    printf("menor: %d \t en posicion: %d\n",menor,posicionMenor);

    system("pause");
    return 0;
}