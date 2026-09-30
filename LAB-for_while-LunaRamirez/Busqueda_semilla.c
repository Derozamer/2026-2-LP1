#include<stdio.h>

int main(){
    int n;
    do{
        printf("Ingrese un numero (mayor a 1, menor a 10000): ");
        scanf("%d", &n);

    }while(n<1 && n>10000);

    int pasos=0;
    while(n != 1){
        if( n%2 == 0){
            n /= 2;
            pasos++;
        }else{
            n = (3*n) + 1;
            pasos++;
        }
    }
    printf("Semilla: %d", pasos);
}