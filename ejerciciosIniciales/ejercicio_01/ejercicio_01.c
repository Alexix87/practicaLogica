#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b;

    printf("ingrese dos numeros : ");
    scanf("%d %d",&a,&b);

    printf("%d mas %d = %d\n",a,b,a+b);
    printf("%d menos %d = %d\n",a,b,a-b);
    printf("%d por %d = %d\n",a,b,a*b);
    
    system("pause");    
    return 0;
}