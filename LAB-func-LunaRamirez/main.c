#include<stdio.h>
#include "raiz_digital.h"

int main(){
    int n;
    do{
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);
    }while(n<0);

    imprimir_traza(n);
    printf("Raiz digital de n: %d", raiz_digital(n));

    return 0;
}