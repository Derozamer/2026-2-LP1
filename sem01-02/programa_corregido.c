#include<stdio.h>
#include<stdlib.h>
int main(){
    int contador=0;
    printf("Contador: %d\n", contador);

    int a=21, b=2;
    float div;
    if(b != 0){
        div = (float)a / b;
        printf("Division: %d / %d = %.3f\n", a, b, div);
    }
    else{
        printf("No se puede realizar una division entre 0.\n");
    }

    char nombre[10];
    printf("Ingrese su nombre:");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola, %s\n", nombre);

    float precio = 19.99;
    printf("Precio: %.2f\n", precio);

    return 0;
}