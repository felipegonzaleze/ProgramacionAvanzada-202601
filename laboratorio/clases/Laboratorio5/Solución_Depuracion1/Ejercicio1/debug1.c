#include <stdio.h>

int main()
{
    int datos[5] = {10, 20, 30, 40, 50};
    int suma = 0;
    int promedio;

    for (int i = 0; i < 5; i++)
    {
        printf("i=%d, dato=%d, suma antes=%d\n", i, datos[i], suma);
        suma += datos[i];
        printf("suma después=%d\n", suma);
    }

    promedio = suma / 5;

    printf("Promedio = %d\n", promedio);
    return 0;
}
