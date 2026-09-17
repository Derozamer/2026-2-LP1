#include<stdio.h>

int main(void){
    int a = 2, b = 3, c = 4;
    
    printf("%d\n", a + b * c); //14 
    
    printf("%d\n", (a + b) * c);//20 

    printf("%d\n", a > b && b < c);//0 

    printf("%d\n", 1 << 2 + 3);// 1 << 5 = 1*(2^5) --> 32
}