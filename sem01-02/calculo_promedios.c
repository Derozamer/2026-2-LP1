#include<stdio.h>

#define MAX_ESTUDIANTES 5
int main(){
    
    char nombre[50];
    float nota1, nota2, nota3, promedio;
    int i;
    printf("========  SISTEMA DE CALIFICACIONES  ========\n\n");

    for(i=0; i<MAX_ESTUDIANTES; i++){
        printf("\n---  Estudiante #%d  ---\n", (i + 1));

        while(getchar() != '\n');

        printf("Nombre: ");
        fgets(nombre, sizeof(nombre), stdin);

        for(int j = 0; nombre[j] != '\0'; j++){
            if(nombre[j] == '\n'){
                nombre[j] = '\0';
                break;
            }
        }
        do{
            printf("Nota 1 (1-100):");
            scanf("%f", &nota1);
        } while(nota1 < 1 || nota1 > 100);
        do{
            printf("Nota 2 (1-100):");
            scanf("%f", &nota2);
        } while(nota2 < 1 || nota2 > 100);
        do{
            printf("Nota 3 (1-100)");
            scanf("%f", &nota3);
        } while(nota3 < 1 || nota3 > 100);
        promedio = nota1+nota2+nota3 / 3;
        char* estado;
        if(promedio >= 70){
            estado="APROBADO";
        }
        else if(promedio >= 50){
            estado="RECUPERACION";
        }
        else{
            estado="DESAPROBRADO";
        }

        printf("\n----- RESULTADOS ------\n");
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Promedio: %.3f\n",promedio);
        printf("Estado: %s\n", estado);

        printf("%s\n", (i < MAX_ESTUDIANTES - 1) ? "-------------------" : "===================");
    }

    printf("\nProcedimiento terminado!\n");
    return 0;
}