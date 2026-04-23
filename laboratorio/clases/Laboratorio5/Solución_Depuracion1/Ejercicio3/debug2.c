#include <stdio.h>
#include <assert.h>

/*
    ¿ Donde debe ir nuestro assert ?
    ¿ Con este assert nos basta o deberíamos hacer otra cosa ?
    ¿ Como podemos reparar este código ?
*/

int main()
{
    int datos[3] = {0, 0, 0};
    int suma = 0;
    int n = 0;

    int resultadoScanf = 0;
    resultadoScanf = scanf("%d %d %d", &datos[0], &datos[1], &datos[2]);
    scanf("%d", &n);

    assert(resultadoScanf == n);

    for (int i = 0; i < n; i++)
    {
        suma += datos[i];
    }

    int promedio = suma / n;

    printf("Promedio = %d\n", promedio);
    return 0;
}