#include<stdio.h>
int main(void){
    int a = 5, b = 0;

    if(a) printf("a = %d es verdadero\n", a);
    if(!b) printf("b = %d es falso, !b = %d\n", b, !b);

    printf("5 > 3 = %d\n", 5 > 3); // cualquier valor distinto de 0 es verdadero
    printf("5 == 4 = %d\n", 5 == 4);// 0 es falso

    // || y && no evaluan lo innecesario.
    if(b != 0 && a / b > 1){ // como b != 0 es falso no evalua a / b > 1.
        printf("No se ejecuta.\n");
    }
    else{
        printf("Cortocircuito evito division por cero.\n");
    }

    int r = 1 || 0 && 0; // && tiene mayor procedencia que ||
    printf("1 || 0 && 0 = %d\n", r);
    //probando
    r = 0 || 1 && 0;
    printf("0 || 1 && 0 = %d\n", r);
    r = 0 || 1 && 1;
    printf("0 || 1 && 1 = %d\n", r);
    return 0;
}
