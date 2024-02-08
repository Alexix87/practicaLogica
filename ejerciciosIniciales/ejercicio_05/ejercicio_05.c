#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b){
    int rta;
    if (a<b) rta = -1;
    else if(a>b) rta = 1;
        else rta = 0;
    return rta;
}

int main(){
    int a,b,rta;

    printf("ingresar dos valores: \n");
    scanf("%d %d",&a,&b);
    
    rta = maximo(a,b);

    switch(maximo(a,b)){
        case 0:     printf("Los valores ingresados son iguales!\n");
                    break;
        case -1:    printf("El mayor entre %d y %d es: %d\n",a,b,b);
                    break;
        case 1:     printf("El mayor entre %d y %d es: %d\n",a,b,a);
    }
    
    system("pause");
    return 0;
}