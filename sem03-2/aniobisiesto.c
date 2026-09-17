#include<stdio.h>
int main(void){
    int anio = 2028;
    if( anio  % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
        printf("El anio es bisiesto!!!\n");
    } else{
        printf("El anio no es bisiesto :C\n");
    }
}