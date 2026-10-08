#include<stdio.h>

void imprimir(int *datos_ptr){
    printf("sizeof(datos_ptr) en una funcion: %zu", sizeof(datos_ptr));
}
int main()
{
    int datos[10]={0};
    int *datos_ptr = &datos[0];
    //datos_ptr = &datos[0]; 
    printf("Ingrese los 10 valores :\n");
    for(size_t i = 0; i < 10 ; i++){
        scanf("%d", &datos[i]);
    }
    int suma = 0;
    int menor = datos[0];
    int pos_menor = 0;
    int mayor = datos[0];
    int pos_mayor = 0;
    double promedio = 0.0;
    int cant_par = 0;
    int cant_impar = 0; 
    for(size_t i = 0; i < 10 ; i++){
        suma += datos[i];
        if(datos[i] > mayor){
            mayor = datos[i];
            pos_mayor = i;
        }
        if(datos[i] < menor){
            menor = datos[i];
            pos_menor = i;
        }
        if((datos[i])%2 == 0){
            cant_par++;
        } else{
            cant_impar++;
        }
    }
    promedio = (double)suma/10;

    printf("Suma : %d\n", suma);
    printf("Promedio : %.2f\n", promedio);
    printf("Minimo : %d (Indice %d)\n", menor, pos_menor);
    printf("Maximo : %d (Indice %d)\n", mayor, pos_mayor);
    printf("Pares : %d\n", cant_par);
    printf("Impares : %d\n", cant_impar);
    printf("Original:\n");
    for(size_t i = 0; i < 10; i++){
        if(i != 9){
            printf("%d, ", datos[i]);
        }
        else{
            printf("%d\n", datos[i]);
        }
    }
    int pos=0;
    for(size_t i=0; i<5; i++){
        int temp = datos[10-(pos+1)];
        datos[10-(pos+1)] = datos[pos]; 
        datos[pos] = temp;
        pos++;
    }
    /*for(int i=0; i<5 ; i++){
        int temp = datos[10-(i+1)];
        datos[10-(i+1)] = datos[i]; 
        datos[i] = temp;
    }*/
    printf("Invertido:\n");
    for(size_t i = 0; i < 10; i++){
        if(i != 9){
            printf("%d, ", datos[i]);
        }
        else{
            printf("%d\n", datos[i]);
        }
    }
    printf("sizeof(datos_ptr): %zu\n", sizeof(datos_ptr));
    printf("sizeof(datos[0]): %zu\n", sizeof(datos[0]));
    imprimir(datos);
    return 0;
}