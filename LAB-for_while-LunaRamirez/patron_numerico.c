#include<stdio.h>

int main(){
    int n;
    do{
        printf("Ingrese n: ");
        scanf("%d", &n);
    }while(n<0);

    for(int i = 0; i< 2*n; i++){
        for(int j = 1; j < n; j++){
            printf("%d "; j);
        }
    }
}