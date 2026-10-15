#include<stdio.h>

int ackermann(int m ,int n){
    if(m == 0){
        return n+1;
    }
    if(m >0 && n==0){
        return ackermann(m-1,1);
    }
    if(m > 0 && n > 0){
        return ackermann(m-1, ackermann(m, n-1));
    }

}

int main(){
    //int m = 3;
    //int n = 4;
    //static int cont=0;
    printf("Mostrando el valor de ackermann(3,4)\n");
    printf("ackermann(3,4): %d\n", ackermann(3,4));
    //printf("Mostrando el valor de ackermann(4,2)\n");
    //printf("ackermann(4,2): %d\n", ackermann(4,2));

    //printf("Contador = %d", cont);
}