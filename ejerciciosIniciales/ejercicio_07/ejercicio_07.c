#include <stdio.h>
#include <stdlib.h>

int formatearFecha(int aaaa,int mm, int dd){
    return dd + mm*100 + aaaa*10000;
}

int main(){

    int aaaa,mm,dd;

    printf("Anio: ");
    scanf("%d",&aaaa);
    printf("Mes: ");
    scanf("%d",&mm);
    printf("Dia: ");
    scanf("%d",&dd);

    printf("En formato aaaammdd es: %d\n", formatearFecha(aaaa,mm,dd));
    
    system("pause");
    return 0;
}