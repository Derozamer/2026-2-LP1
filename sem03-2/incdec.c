#include<stdio.h>

int main(void){
    int i = 5, j;
    j = i++; printf("j = i++ --> i = %d , j = %d\n", i, j);
    i = 5; printf("Regresamos el valor de 5 a i.\n");
    j = ++i; printf("j = ++i --> i = %d , j = %d\n", i, j);

    //trampa. comportamiento no especificado. (NO USAR!!)
    i = 5; printf("Regresamos el valor de 5 a i.\n");
    int k = i++ + i++; //orden de evaluacion no definido, no hacer
    printf("k = i++ + i++ --> k = %d , i = %d\n", k, i);
    //probando
    i = 5;
    k = i++ + ++i;
    printf("k = i++ + ++i --> k = %d , i = %d\n", k, i);
    i = 5;
    k = ++i + ++i;
    printf("k = ++i + ++i --> k = %d , i = %d\n", k, i); //k deberia ser 13 si no me equivoco. parece que al compilar se confunde con los ++ quiza.
    printf("NO UTILIZAR NINGUNA DE ESTAS 3 ULTIMAS LINEAS!!\n");


    return 0;
}