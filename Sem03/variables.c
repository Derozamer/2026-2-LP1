#include<stdio.h>
#include<string.h>

int main(){
    int a = 25;
    float b = 7.5;
    double c = 6.022e23;
    char d = 'A';
    char *nombre = "UNI";

    printf("a = %d ocupa %d bytes\n", a, sizeof(a));
    printf("b = %f ocupa %d bytes\n", b, sizeof(b));
    printf("c = %1f ocupa %d bytes\n", c, sizeof(c));
    printf("d = %c ocupa %d bytes\n", d, sizeof(d));
    printf("La direccion de nombre = %s ocupa %d bytes y tiene %d caracteres\n", nombre, sizeof(nombre), strlen(nombre));


    return 0;
}