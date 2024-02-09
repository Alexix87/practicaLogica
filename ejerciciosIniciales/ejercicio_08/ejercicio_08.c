#include <stdio.h>
#include <stdlib.h>

int main(){
    int aaaammdd,mmdd;
    int aaaa,mm,dd;

    printf("Ingrese una fecha con formato aaaammdd: ");
    scanf("%d",&aaaammdd);

    aaaa = aaaammdd / 10000;
    mmdd = aaaammdd % 10000;
    mm = mmdd / 100;
    dd = mmdd % 100;

    printf("La fecha es: \nAnio: %d\nMes: %d\nDia: %d\n",aaaa,mm,dd);

    system("pause");
    return 0;
}