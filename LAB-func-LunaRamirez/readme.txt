Ejercicio 2.1.2 — El malentendido del paso por valor
1. ¿Por qué n sigue siendo 10 en main?
--> Porque en la funcion se le pasa solo el valor o una copia por asi decirlo.
2. ¿Cómo se resolvería sin usar punteros?
--> haciendo que devuelva el valor modificado.
3. Reescribir incrementar para que retorne el valor
modificado.
-->int incrementar(int x) {
    x = x + 1;
    printf("Dentro de incrementar: x = %d\n", x);
    return x;
   }

-----------------------------------------------------------------------------------------

Ejercicio 2.1.3 — Variables locales vs. globales 
4. Discusión: ¿Por qué las variables globales son una mala práctica en Ingeniería de Software? Mencionar al menos
tres razones (acoplamiento, dificultad de testeo, condiciones de carrera en concurrencia).
--> Podria ser tambien posible confusion entre variables y salidas erroneas por el nombre iguales entre variables locales y globales.

-------------------------------------------------------------------------------------------------

Ejercicio 2.2.1 — Modularizar la calculadora de raíz digital
1. ¿Qué contiene el .h y qué no debe contener?
--> El .h contiene declaraciones de funciones.
2. ¿Por qué el .h no debe tener definiciones de funciones (salvo static inline en casos avanzados)?
--> Por que si una funcion esta definida en el archivo.h y a su vez en el archivo de declaraciones.c dara un error diciendo que hay multiples definiciones a dicha funcion.
3. ¿Para qué sirven las directivas (#ifndef/#define/#endif)? Probar incluir el mismo .h dos veces en main.c y ver qué pasa con y sin guardas.
-->Para verificar si esta definido el identificador
#ifndef(el identificador esta definido?)
#define(si no lo esta, define)
#endif(terminar el if)
4. ¿Por qué main.c solo necesita incluir raiz_digital.h y no raiz_digital.c?
-->Porque el .h buscara las definiciones de las funciones, asi que no es necesarion incluir el raiz_digital.c

