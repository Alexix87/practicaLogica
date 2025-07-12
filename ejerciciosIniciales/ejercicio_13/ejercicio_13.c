#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int contador = 0;

    printf("Ingresar valor n: ");
    scanf("%d",&n);

    while(contador <= n){
        printf("%d \n",contador);
        contador++;
    }

    system("pause");
    return 0;
}