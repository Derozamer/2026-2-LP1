#include<stdio.h>
unsigned int contar_unos(unsigned int n) {
    int cuenta = 0;
    while (n) {
        n &= (n - 1); // borra el bit 1 menos significativo
        cuenta++;
    }
    return cuenta;
}
/*unsigned int contar_ceros(unsigned int n){
    int cuenta = 0;
    while(n!=0){
        n |= (n + 1);
        cuenta++;
    }
    return cuenta;
}
    Quise tratar de hacer una funcion casi igual para contar ceros, pero analizando cada linea me di cuenta que no hay condicion correcta en el while por lo que nunca retornara,
    Una solucion seria saber la cantidad de bits que se usara y solamente restarle la cantidad de 1s*/

int main(void){
    int conta;
    unsigned char a = 0b11001010;
    unsigned char b = 0b00010100;
    conta = contar_unos(a);
    printf("cuenta = %d\n", conta);
    conta = contar_unos(b);
    printf("cuenta = %d\n", conta);
    /*conta = contar_ceros(a);
    printf("cuenta = %d\n", conta);
    conta = contar_ceros(b);
    printf("cuenta = %d\n", conta);*/

    return 0;
}