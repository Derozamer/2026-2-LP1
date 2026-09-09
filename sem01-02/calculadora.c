#include<stdio.h>
int main(){
    const int eu=2.71828;
    const int pi=3.14159;
    int num1, num2;
    float resultado;
    printf("--------  CALCULADORA BASICA  --------\n");
    printf("Ingrese el valor de dos numeros enteros:\n");
    printf("Primer numero: ");
    scanf("%d", &num1);
    printf("Segundo numero: ");
    scanf("%d", &num2);
    printf("RESULTADOS:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    resultado = (float)num1/num2;
    printf("%d / %d = %.5f\n", num1, num2, resultado);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
    //Incrementos
    printf("Tomaremos el primer numero como ejemplo.\n");
    int x=num1;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++); //Post incremento
    printf("Despues de num1++ (Post-incremento)--> x = %d\n", x);
    printf("++x = %d\n", ++x); // Pre incremento
    return 0;
}
