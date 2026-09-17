#include<stdio.h>

int main(){
    printf("C version: %ld\n", __STDC_VERSION__);
    printf("int: %zu bytes | long: %zu bytes |long long: %zu bytes | float: %zu bytes | double: %zu bytes | long double: %zu bytes\n",
            sizeof(int), sizeof(long),sizeof(long long), sizeof(float), sizeof(double), sizeof(long double));
            
    return 0;
}