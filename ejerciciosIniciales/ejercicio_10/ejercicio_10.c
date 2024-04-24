#include <stdio.h>
#include <stdlib.h>

int esTrianguloValido(int a,int b, int c){
    if ((a+b>c) && (b+c>a) && (a+c>b)) return 1;
    else return 0;
}

char* tipoDeTriangulo(int a, int b, int c){
    if ((a==b) && (b==c)) return "EQUILATERO";
    else
        if ((a!=b) && (a!=c) && (b!=c)) return "ESCALENO";
        else return "ISOSCELES";
}

int main(){

    int ladoA,ladoB,ladoC;

    do{
        printf("Ingrese valores de los lados del triangulo:\n");
        scanf("%d %d %d",&ladoA, &ladoB, &ladoC);
    }while(!esTrianguloValido(ladoA,ladoB,ladoC));

    printf("El triangulo es: %s\n",tipoDeTriangulo(ladoA,ladoB,ladoC));

    system("pause");
    return 0;
}