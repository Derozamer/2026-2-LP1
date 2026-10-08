#include<stdio.h>

int main(){
    int x = 42;
    int *p = &x; 
    int **pp = &p;
    
    printf("x = %d\n", x);
    printf("valor en *p = %d\n", *p);
    printf("valor en **pp = %d\n", **pp);

    printf("Direccion de x: %p\n", &x);
    printf("Valor de p: %p\n", (void *)p);
    printf("Direccion de p: %p\n", (void *)p);
    printf("Direccion de pp: %p\n", (void *)pp);

    printf("Modificando por *p el valor de x:\n");
    *p = 120;
    printf("x = %d\n", x);
    printf("Modificando por **pp el valor de x:\n");
    **pp = 67;
    printf("x = %d\n", x);

    return 0;
}