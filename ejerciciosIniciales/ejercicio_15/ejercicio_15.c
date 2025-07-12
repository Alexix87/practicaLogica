#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int contador = 1;
    int factorial = 1;

    printf("Ingrese n: ");
    scanf("%d",&n);

    while (contador <= n){
        factorial = factorial * contador;
        contador++;
    }
    
    printf("%d! = %d \n",n,factorial);
    system("pause");
    return 0;
}