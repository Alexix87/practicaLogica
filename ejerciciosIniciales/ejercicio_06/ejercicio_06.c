#include <stdlib.h>
#include <stdio.h>

void mostrar(int uno,int dos,int tres){
    printf("Los valores mostrados en orden ascendente son: \n %d\t%d\t%d\n",uno,dos,tres);
}

int main(){
    
    int a,b,c;

    printf("Ingresar tres valores: \n");
    scanf("%d %d %d",&a,&b,&c);

    if (a<=b)
        if (b<c) mostrar(a,b,c);
        else // b>c a<b
            if(a<=c) mostrar (a,c,b);
            else mostrar(c,a,b);
    
    else // a>b
        if(c<b) mostrar(c,b,a);
        else  //a>b c>b
            if (a<c) mostrar(b,a,c);
            else mostrar(b,c,a);

    system("pause");
    return 0;    
}