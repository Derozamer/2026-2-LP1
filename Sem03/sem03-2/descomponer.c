#include<stdio.h>
//sin copiar
int main(void){
    int x = 6316;
    printf("Miles: %d\n", x / 1000 );
    printf("Centenas: %d\n", (x /100) % 10);
    printf("Decenas: %d\n", (x / 10) % 10);
    printf("Unidades: %d\n", (x % 10));

    return 0;
}