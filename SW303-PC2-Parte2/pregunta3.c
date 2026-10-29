#include<stdio.h>
#include<stdlib.h>

int minimo(const int *v, int n, int *salida){
    if(v == NULL || n <= 0 || salida == NULL){
        return 0;
    }else{
        int min = *v;
        for(int i=0; i<n; i++){
            if(*(v+i) < *salida){
                min = *(v+i);
                salida = &min;
            }
        }
        printf("El minimo valor en el arreglo es: %d\n", *salida);
        return 1;
    }
}
int maximo(const int *v, int n, int *salida){
    if(v == NULL || n <= 0 || salida == NULL){
        return 0;
    }else{
        int max = *v;
        for(int i=0; i<n; i++){
            if(*(v+i) < *salida){
                max = *(v+i);
                salida = &max;
            }
        }
        printf("El maximo valor en el arreglo es: %d\n", *salida);
        return 1;
    }
}

long long suma(const int *v, int n){
    if(v == NULL || n <= 0){
        return 0;
    }else{
        long long suma=0;
        for(int i=0; i<n; i++){
            suma = suma + *(v+i);
        }
        return suma;
    }
}

int promedio(const int *v, int n, double *salida){
    if(v == NULL || n <= 0 || salida == NULL){
        return 0;
    }else{
        *salida = (double)suma(v, n)/n;
        printf("El promedio del arreglo es: %.2f\n", *salida);
        return 1;
    }
}



int main(){
    int n;
    printf("Ingrese un numero entero: ");
    scanf("%d", &n);

    if(n < 1 || n > 1000){
        printf("Se ingreso un valor no valido para n\nTerminando programa...\n");
        return 1;
    }

    int *ptr = calloc((size_t)n, sizeof *ptr);

    if( ptr == NULL){
        printf("Error al reservar la memoria\n");
        return 1;
    }

    printf("Valores inicializados con calloc() para %d numeros.\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    for (int i=0; i<n; i++){
        printf("Valor #%d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("Valores modificados.\n");
    for(int i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    int min= *ptr, max= *ptr;
    double prom = 0.0;
    printf("Salida de funcion minimo(): %d\n", minimo(ptr, n, &min));
    printf("Salida de funcion maximo(): %d\n", maximo(ptr, n, &max));
    printf("Salida de funcion suma(): %d\n", suma(ptr, n));
    printf("Salida de funcion promedio(): %d\n", promedio(ptr, n, &prom));

    return 0;
}