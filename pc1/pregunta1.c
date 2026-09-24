#include<stdio.h>
unsigned int contar_unos(unsigned int n){
    int cont = 0;
    while (n) {
        n &= (n - 1);
        cont++;
    }
    return cont;
}

void imprimir_unos(unsigned int n){
    for (int i = 31; i >= 0; i--) {
        putchar((n >> i) & 1 ? '1' : '0');
        if(i % 4 == 0){
            printf(" ");
        }
    }
    putchar('\n');
}
int main(void){
    unsigned int registro;
    unsigned char n;
    char r;
    int cont;
    
    #define BIT(n) (1 << (n))

    unsigned char flags = 0;

    for(;;){

        printf("Ingrese un caracter: ");
        scanf("%c", &r);

        if(r == 'q'){

            cont= contar_unos(n);
            printf("Registro: "); imprimir_unos(registro);
            //printf("Hex:  \n", );
            //printf("Decimal: \n", );
            printf("Unos: %d\n", cont);

            return 0;
        }else{
            printf("Ingrese un numero para el registro: ");
            scanf("%u", &registro);


            printf("Ingrese el bit(entre 0 y 31): ");
            scanf("%c", &n);

            if(n <= 31){
                flags |= BIT(n);

                flags = ~BIT(n);

                flags ^= BIT(n);
            }
            printf("Despues de las operaciones con el bit: %02X", flags);
        }
    }
}