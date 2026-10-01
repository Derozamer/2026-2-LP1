#include <stdio.h>
int contador = 0; // VARIABLE GLOBAL
void incrementar_local(void) {
 int contador = 0; // LOCAL — oculta la global
 contador++;
 printf("local contador = %d\n", contador);
}

int main(void) {
 incrementar_local();
 incrementar_local();
 incrementar_local();
 printf("global contador = %d\n", contador);
 return 0;
}
/*Digo que la salida sera 0 ya que en la funcion incrementar_local
se usa la variable contador que se inicializo en esa funcion*/