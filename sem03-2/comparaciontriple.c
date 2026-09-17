#include<stdio.h>
int main(void){
    int x = 3;
    int r = 5 > x > 2;
    printf("r = 5 > %x > 2 ---> r = %d\n ", x, r);

    x = 8;
    r = 5 > x > 10;
    printf("r = 5 > %x > 10 ---> r = %d\n ", x, r);

    /*Respondiendo la pregunta.
    la expresion 5 > x > 2 al ejecutar el programa lo que hace es tomar
    5 < x y lo evalua luego que el valor booleano (0 o 1) y despues dice que una expresion
    booleana comparado(<) con una constante es SIEMPRE verdadero y que una expresion booleana comparada (>) con una constante es SIEMPRE falsa.
    */
}