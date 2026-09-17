#include<stdio.h>

int main(void){
    int a = 7, b = 2;
    printf("7 / 2 = %d (Division entera)\n", a / b);
    printf("7 %% 2 = %d (Modulo)\n", a % b);
    printf("7 / 2.0 = %.2f (Promocion a double)\n", a / 2.0);
    printf("(float)7 / 2 = %.2f \n", (float)a / b);

    //Modulos negativos, C trunca hacia 0
    printf("-7 %% 2 = %d\n", -7 % 2);
    printf("7 %% -2 = %d\n", 7 % -2);

    int x = 10;
    printf("El valor de x es %d\n", x);
    x += 5; printf("x += 5, x = %d\n", x);
    x -= 3; printf("x -= 3, x = %d\n", x);
    x *= 2; printf("x *= 2, x = %d\n", x);
    x /= 4; printf("x /= 4, x = %d\n", x);
    x %= 4; printf("x %%= 4, x = %d\n", x);
    
    return 0;
}
/*LEER
Respondiendo las preguntas.(LOS "--->" son mi respuesta escrita.)
1. ¿Por qué 7 / 2 da 3 y no 3.5? Compáralo con Python 3.
---> Por el "%d" que indica que alli ira un numero entero, asi pongamos , (float) a / b.
2. ¿Cuál es el signo de -7 % 2 en C? ¿Es igual que en Python? (No — C trunca hacia cero, Python)
--->Su signo es negativo (-1).
hacia −∞.
3. ¿Qué ocurre con x /= 4 cuando x es int?
--->Lo que ocurre es una division enteras ya que el x es int.
    si fuera x=15 y hacemos x /= 4, x tomara el valor de 3.*/