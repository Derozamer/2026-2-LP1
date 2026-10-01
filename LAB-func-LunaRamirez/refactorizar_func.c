#include<stdio.h>
int suma_digitos(int num){
    int suma=0;
    while(num != 0){
        suma += num%10;
        num /= 10;
    }
    return suma;
}
int raiz_digital(int num){
    if (num == 0){
        return 0;
    }
    while(num >= 10){
        num = suma_digitos(num);
    }
    return num;

}
void imprimir_traza(int num){
    printf("%d", num);
    while(num >= 10){
        num = suma_digitos(num);
        printf("--> %d", num);
    }
    printf("\n");
}
int main(){
    int n;
    do{
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);
    }while(n<0);

    imprimir_traza(n);
}