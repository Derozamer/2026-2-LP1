#include <stdio.h>

void imprimir_bytes(void *direccion, int cantidad)
{
    unsigned char *p = (unsigned char *)direccion;

    for (int i = 0; i < cantidad; i++)
        printf("%02x ", p[i]);

    printf("\n");
}

void dump(void *direccion, int cantidad)
{
    unsigned char *p = (unsigned char *)direccion;

    for (int i = 0; i < cantidad; i += 8)
    {

        for (int j = 0; j < 8 && i + j < cantidad; j++)
            printf("%02x ", p[i + j]);

        printf("  ");

        for (int j = 0; j < 8 && i + j < cantidad; j++)
        {
            unsigned char c = p[i + j];

            if (c >= 32 && c <= 126)
                printf("%c", c);
            else
                printf(".");
        }

        printf("\n");
    }
}

int main()
{
    int v[5] = {
        0x11223344,
        0x55667788,
        0x99aabbcc,
        0xddeeff00,
        0x12345678};

    for (int i = 0; i < 5; i++)
    {

        printf("v[%d] = %d (0x%08x) @ %p\n",
               i, v[i], v[i], (void *)&v[i]);

        printf("bytes: ");
        imprimir_bytes(&v[i], sizeof(int));

        printf("\n");
    }

    double d = 3.14;

    printf("double d = %.2f\n", d);

    printf("bytes: ");
    imprimir_bytes(&d, sizeof(double));

    printf("\n");

    printf("DUMP DE v:\n");
    dump(v, sizeof(v));

    return 0;
}