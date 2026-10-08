#include <stdio.h>

int main()
{
    int sumf[3] = {0, 0, 0}, sumc[4] = {0, 0, 0, 0}, sum = 0;
    int m[3][4];
    int n, k;
    printf("Ingrese los valores de la matriz 3x4\n");
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            scanf("%d", &n);
            m[i][j] = n;
            sumf[i] += n;
            sumc[j] += n;
            sum += n;
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%4d", m[i][j]);
        }
        printf("| suma fila = %d\n", sumf[i]);
    }
    printf("-----------------\n");
    printf("%d %d %d %d  (suma de columnas)\n", sumc[0], sumc[1], sumc[2], sumc[3]);
    printf("Suma total: %d\n", sum);

    printf("Traspuesta 4x3: \n");
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%4d", m[j][i]);
        }
        printf("\n");
    }

    printf("Ingrese el escalar k por el cual se multiplicara la matriz\n");
    scanf("%d", &k);
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            m[i][j] = m[i][j] * k;
        }
    }

    printf("Escalar k = %d\n", k);
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
    printf("%d", &m[0][0]);
    printf("%d", &m[0][1]);
    printf("%d", &m[1][0]);
}