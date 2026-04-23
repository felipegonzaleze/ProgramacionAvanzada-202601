#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int suma = 0;

    // llenar con valores random
    for (int i = 0; i <= 10; i++)
    {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++)
    {
        suma += arr[i];

        if (arr[i] % 2 == 0)
        {
            i++; // posible problema
        }
    }

    printf("Suma = %d\n", suma);
    return 0;
}