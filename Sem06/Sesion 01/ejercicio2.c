#include<stdio.h>
#define FILAS 5
#define COLUMNAS 4
int main(){
    //Definir arreglo bidimensional
    double matriz[FILAS][COLUMNAS];

    //Inicializacion elementos con cero
    for(size_t f = 0 ; f < FILAS ; f++){
        for(size_t c = 0 ; c < COLUMNAS ; c++){
            matriz[f][c] = 0.0;
        }
    }

    //Mostrar matriz
    for(size_t f = 0 ; f < FILAS ; f++){
        for(size_t c = 0 ; c < COLUMNAS ; c++){
            printf("%lf\t",matriz[f][c]);    // el elemento en memoria es f*FILAS + COLUMNAS
        }
        printf("\n");
    }
    return 0;
}