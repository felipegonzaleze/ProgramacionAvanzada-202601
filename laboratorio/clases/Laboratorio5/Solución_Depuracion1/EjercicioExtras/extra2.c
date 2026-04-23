#include <stdio.h>
#include <stdlib.h>

// Arreglo de estructuras para almacenar las series
typedef struct {
    int *data;
    int size;
} Serie;

int main() {
    int series_count;  // Número de series a manejar

    // Leemos el número de series desde la entrada estándar
    scanf("%d", &series_count);

    // Asignamos memoria para el arreglo de series
    Serie *series = (Serie *)malloc(series_count * sizeof(Serie));

    // Leemos las series
    for (int i = 0; i < series_count; i++) {
        scanf("%d", &series[i].size);  // Leer el tamaño de la serie
        series[i].data = (int *)malloc(series[i].size * sizeof(int));  // Asignar memoria para los datos de la serie

        // Leer los datos de la serie
        for (int j = 0; j < series[i].size; j++) {
            scanf("%d", &series[i].data[j]);
        }
    }

    // Calcular y mostrar el promedio de cada serie
    for (int i = 0; i < series_count; i++) {
        int suma = 0;
        for (int j = 0; j < series[i].size; j++) {
            suma += series[i].data[j];  // Sumar los elementos de la serie
        }
        float promedio = (float)suma / series[i].size;  // Calcular el promedio
        printf("Promedio de la serie %d: %.2f\n", i + 1, promedio);
    }

    // Liberar memoria
    for (int i = 0; i < series_count; i++) {
        free(series[i].data);  // Liberar memoria de cada serie
    }
    free(series);  // Liberar memoria del arreglo de series

    return 0;
}