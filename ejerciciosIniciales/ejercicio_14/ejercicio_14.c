#include <stdlib.h>
#include <stdio.h>

int main(){
    int a,b;
    int acumulador = 0;

    printf("Primer valor: ");
    scanf("%d",&a);
    printf("Segundo valor: ");
    scanf("%d",&b);
    
    for(int i=0; i<abs(b); i++)
        acumulador += a;
    
    if (b<0) acumulador = acumulador * -1; 

    printf("%d * %d = %d \n",a,b,acumulador);
    system("pause");
    return 0;
}