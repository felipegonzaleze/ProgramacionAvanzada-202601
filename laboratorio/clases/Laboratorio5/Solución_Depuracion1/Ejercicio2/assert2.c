#include <stdio.h>
#include <assert.h>

int main()
{
    int suma = 100;
    int n = 0;
    int resultadoScanf = 0;

    /*
    Probando los resultados de un printf
        ¿ Qué ocurre si la entrada es un numero ?
        ¿ Qué ocurre cuando la entrada es un float ?
        ¿ Qué ocurre cuando la entrada es un caracter ?
        ¿ Qué ocurre cuando la entrada es un string ?
        Falla si es distinto de int, y además es igual a 0
    */
    resultadoScanf = scanf("%d", &n);
    printf("Resultado Scanf %d\n", resultadoScanf);

    // Si no se cumple la condición la ejecución se interrumpe
    assert(n != 0);
    /*
    ¿ Porqué nos importa hacer un assert aquí ?
        Tenemos que mirar la siguiente linea y ver
        qué sucederá si este valor se mantiene en 0
        Porque dará error al dividir por cero
    */

    int promedio = suma / n;
}
