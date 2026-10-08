#include<stdio.h>
#include<stdlib.h>


int main(){
    char *s = "Hola, mundo";
    int cont_car=0;
    while(*s != '\0'){
        putchar(*s);
        cont_car++;
        s++;
    }
    printf("\nEl numero de caracteres es %d (con todo y espacios ' ')\n",cont_car);
    
    
    
    return 0;
}