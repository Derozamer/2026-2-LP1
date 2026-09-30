#include<stdio.h>

int cifras(int num){
    int cont = 0; 
    while(num !=0){
        cont ++;
        num /= 10;
    }
    return cont;
}

int main(){
    int n;
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int cifras_n = cifras(n);
    int suma = 0;
    int aux = n;

    printf("%d\n", cifras_n);
    printf("%d\n", n);

    while(cifras_n != 1){
        if(aux == 0){
            aux = suma;
            printf("%d\n", aux);
            cifras_n = cifras(aux);
        }
        else{
            suma += (aux%10);
            aux /= 10;
        }
    }

    return 0;

}