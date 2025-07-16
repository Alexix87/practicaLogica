#include <stdio.h>
#include <stdlib.h>

#define MAXIMO_DE_SUBCONJUNTOS 10

int main(){

    int unValor;

    int acumuladorPorSubconjunto[MAXIMO_DE_SUBCONJUNTOS] = {0};
    int contadorPorSubconjunto[MAXIMO_DE_SUBCONJUNTOS] = {0};
    int minimoPorSubconjunto[MAXIMO_DE_SUBCONJUNTOS] = {0};
    int indexPorSubconjunto = 0;

    int maximo = 0;
    int subconjuntoMaximo = 0;
    int posicionMaximoRelativa = 0;
    int contadorPosicionRelativa = 0;

    printf("Ingrese valor: ");
    scanf("%d",&unValor);

    while (unValor >= 0){
        if (unValor == 0){
            indexPorSubconjunto++;

            contadorPosicionRelativa = 0;
        }else{
            acumuladorPorSubconjunto[indexPorSubconjunto] = acumuladorPorSubconjunto[indexPorSubconjunto] + unValor; 
            contadorPorSubconjunto[indexPorSubconjunto]++;
            
            contadorPosicionRelativa++;
            if (unValor>maximo){
                maximo = unValor;
                subconjuntoMaximo = indexPorSubconjunto + 1;
                posicionMaximoRelativa = contadorPosicionRelativa;
            }
            
            if (minimoPorSubconjunto[indexPorSubconjunto]==0 || unValor < minimoPorSubconjunto[indexPorSubconjunto])
                minimoPorSubconjunto[indexPorSubconjunto] = unValor; 

        }
        printf("Ingrese valor: ");
        scanf("%d",&unValor);
    }
    //para el contabilizar el ultimo (o si es unico) subconjunto
    if( (acumuladorPorSubconjunto[indexPorSubconjunto] != 0) || (acumuladorPorSubconjunto[indexPorSubconjunto]==0 && unValor<0) ){
        indexPorSubconjunto++;
    }
   //mostrar informe:
    printf("\n");
    
    printf("CANTIDAD DE SUBCONJUNTOS: %d\n\n",indexPorSubconjunto);
    
    if(indexPorSubconjunto>0){
        printf("PROMEDIO POR SUBCONJUNTOS:\n");
        for(int i=0;i<indexPorSubconjunto;i++){
            printf("Subconjunto %d: \t",i+1);
            if (contadorPorSubconjunto[i]!=0){
                printf("Promedio: %.2f \n",(float) acumuladorPorSubconjunto[i]/contadorPorSubconjunto[i]);
            }else{
                printf("El subconjunto esta vacio\n");
            }
        }
        
        printf("\n");
        printf("El maximo es: %d \t en subconjunto: %d \t posicion en subconjunto: %d\n",maximo,subconjuntoMaximo,posicionMaximoRelativa);
        
        printf("\n");
        printf("MINIMO POR SUBCONJUNTOS:\n");
        for(int i=0;i<indexPorSubconjunto;i++){
            printf("Subconjunto %d: \t",i+1);
            if (minimoPorSubconjunto[i]!=0){
                printf("Minimo: %d \n",minimoPorSubconjunto[i]);
            }else{
                printf("El subconjunto esta vacio\n");
            }
        }
    }else{
        printf("EL CONJUNTO ESTA VACIO!\n");
    }

    printf("\n");
    system("pause");
    return 0;
}
