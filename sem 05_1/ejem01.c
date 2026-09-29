#include<stdio.h>
#define ANIO_ACTUAL 2026


#ifndef __LINUX__
#define __SO__ "Windows"
#else
#define __LINUX__ "Linux"
#endif

void saludar();
int devolver_anio_actual();

int main(){

    //llamada o uso de la funcion
    saludar(); // Toda función que se use, debe estar declarada y/o definida
    printf("El sistema operativo actual es %s", __SO__);
    return 0;
}


int devolver_anio_actual(){
    return ANIO_ACTUAL;
}
// Definiicon de la funcion llamada saludar()
// Parametros: NINGUNO
// Salida : NINGUNO (void)
void saludar(){
    printf("Bienvenidos a SW303 en este anio %d\n", devolver_anio_actual());
    printf("Hola Mundo\n");
}
