#include<stdio.h>

int main(){
    int a = 25, b = 7, c = 129;
    printf("La suma de %d + %d es %d\n", a, b, a+b);
    printf("La resta de %d - %d es %d\n", a, b, a-b);
    printf("La multiplicacion de %d * %d es %d\n", a, b, a*b);
    printf("La division entera de %d / %d es %d\n", a, b, a/b);
    printf("La division  real de %d / %d es %.3f\n", a, b, (float)a/b);
    printf("El resto de dividir %d con %d es %d\n", a, b, a%b);

    printf("\nOperadores de comparacion\n");
    printf("a = %d\n b = %d\n c = %d\n", a, b, c);
    printf("¿%d > %d? es %d\n", a, b, a > b);
    printf("¿%d < %d? es %d\n", a, b, a < b);
    printf("%d > %d y %d > %d es %d\n", a, b, b, c, (a > b) && (b > c));
    printf("%d > %d o %d > %d es %d\n", a, b, b, c, (a > b) || (b > c));
    return 0;
}