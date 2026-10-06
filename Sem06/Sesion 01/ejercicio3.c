#include<stdio.h>

int main(){
    int *ptr; //se define ptr como puntero
              //es una variable que opera con direccion de memoria
              //inicialmente apunta a algun lugar de la memoria
    /* Regla: Si se crea el puntero se requiere inicializar antes de usar */
    int cantidad = 200;

    ptr = NULL; //NULL es cero, significa que no se apunta a nada , que no tiene memoria

    //despues de muchas lineas

    if(ptr == NULL){
        ptr = &cantidad;
        printf("Puntero inicializado, su direccion es %p y su valor es %d", ptr, *ptr);
    } else {
        printf("El puntero ya tiene memoria, no es necesario inicializar\n");
    }

    return 0;
}