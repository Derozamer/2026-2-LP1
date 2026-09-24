#include <stdio.h>
#include <math.h>

int main(){
int lado_a,lado_b,lado_c;
float s,area;
long hip,cat1,cat2;
scanf("%d %d %d",&lado_a,&lado_b,&lado_c);
if(lado_a>0&&lado_b>0&&lado_c>0){
    if(lado_a+lado_b>lado_c&&lado_a+lado_c>lado_b&&lado_b+lado_c>lado_a){
        if(lado_a==lado_b&&lado_b==lado_c){
            printf("equilatero\n");}
            else{
                if(lado_a==lado_b||lado_a==lado_c||lado_b==lado_c){
                    printf("isosceles\n");}
                        else{
                                                    
                            s = (lado_a + lado_b + lado_c) / 2.0;
                            area = sqrt(s * (s-lado_a) * (s-lado_b) * (s-lado_c));
                            
                            if(lado_a>lado_b){
                                if(lado_a>lado_c){
                                    hip = lado_a;
                                    cat1 = lado_b;
                                    cat2 = lado_c;
                                }else{
                                    hip = lado_c;
                                    cat1 = lado_a;
                                    cat2 = lado_b;
                                }
                            }
                            if(lado_b>lado_a){
                                if(lado_b>lado_c){
                                    hip = lado_b;
                                    cat1 = lado_a;
                                    cat2 = lado_c;
                                }else{
                                    hip = lado_c;
                                    cat1 = lado_a;
                                    cat2 = lado_b;
                                }
                            }
                            if(lado_c>lado_a){
                                if(lado_c>lado_b){
                                    hip = lado_c
                                    cat1 = lado_a;
                                    cat2 = lado_b;;
                                }else{
                                    hip = lado_b
                                    cat1 = lado_a;
                                    cat2 = lado_c;;
                                }
                            }
                            
                            if(hip*hip == cat1*cat1 + cat2*cat2){
                                
                                printf("Lados: %d %d %d", lado_a, lado_b, lado_c);
                                printf("Tipo: Escaleno");
                                printf("Rectangulo: SI");
                                printf("Area: %f", area);
                                    
                            return 0;
                    }
                }
                
                
    
            
          
                
                
               
                
            }
        






    }
    else{printf("no triangulo\n");}
}else{printf("invalido\n");}


return 0;
}