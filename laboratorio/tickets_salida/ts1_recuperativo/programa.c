#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char nombre[50];
    int capacidad;
    int disponible; // 1 = disponible, 0 = ocupada
} Sala;

int main() {
    Sala salas[MAX];
    int n;

    printf("Ingrese la cantidad de salas: ");
    scanf("%d", &n);

    // Ingreso de datos
    for (int i = 0; i < n; i++) {
        printf("\nSala %d\n", i + 1);

        printf("Nombre: ");
        scanf("%s", salas[i].nombre);

        printf("Capacidad: ");
        scanf("%d", &salas[i].capacidad);

        printf("Disponible (1=Si, 0=No): ");
        scanf("%d", &salas[i].disponible);
    }

    int minimo;
    printf("\nIngrese cantidad minima de personas: ");
    scanf("%d", &minimo);

    int indice_min = -1;
    int indice_max = -1;

    // Búsqueda
    for (int i = 0; i < n; i++) {
        if (salas[i].disponible == 1) {

            // Buscar la sala más pequeña que cumpla
            if (salas[i].capacidad >= minimo) {
                if (indice_min == -1 || salas[i].capacidad < salas[indice_min].capacidad) {
                    indice_min = i;
                }
            }

            // Buscar la sala más grande disponible
            if (indice_max == -1 || salas[i].capacidad > salas[indice_max].capacidad) {
                indice_max = i;
            }
        }
    }

    // Resultados
    printf("\n--- RESULTADOS ---\n");

    if (indice_min != -1) {
        printf("Sala mas pequeña que cumple: %s (%d personas)\n",
               salas[indice_min].nombre,
               salas[indice_min].capacidad);
    } else {
        printf("No hay sala disponible que cumpla con el minimo requerido.\n");
    }

    if (indice_max != -1) {
        printf("Sala mas grande disponible: %s (%d personas)\n",
               salas[indice_max].nombre,
               salas[indice_max].capacidad);
    } else {
        printf("No hay salas disponibles.\n");
    }

    return 0;
}