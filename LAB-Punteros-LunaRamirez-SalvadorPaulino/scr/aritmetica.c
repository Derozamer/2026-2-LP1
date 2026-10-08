#include <stdio.h>

int main()
{
    int v[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int *p = v;
    int sum = 0;
    int *n;
    printf("*p      = %2d\n*(p+1)  = %2d\n*(p+7)  = %2d\n", *p, *(p + 1), *(p + 7));
    printf("p[3]    = %d\n3[p]    = %d\n", p[3], 3 [p]);
    printf("(p+5) - p = %lld\n", (p + 5) - p);
    printf("Sizeof(int) = %lld\n", sizeof(int));
    printf("Recorrido forward: ");
    for (size_t i = 0; i < 8; i++)
    {
        printf("%d ", *(p + i));
        sum += *(p + i);
    }
    printf("\nSuma: %d", sum);

    printf("\nRecorrido reverse: ");
    for (int i = 7; i > -1; i--)
    {
        n = &v[i];
        printf("%d ", *n);
    }

    printf("\n%d", (char *)p);
    printf("\n%d", (char *)(p + 5));
    printf("\n%d", (char *)(p + 5) - (char *)p);
}