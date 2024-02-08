#include <stdio.h>
#include <stdlib.h>

int maximo(int a, int b){
    return a<b?b:a;
}

int main(){
    int a,b;
    printf("ingresar dos valores: \n");
    scanf("%d %d",&a,&b);
    printf("El mayor entre %d y %d es: %d\n",a,b,maximo(a,b));

    system("pause");
    return 0;
}