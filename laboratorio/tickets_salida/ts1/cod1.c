#include <stdio.h>

int main() {
    int arr[10];
    int tam = 8;
    int num;
    int i, suma;
    for (i = 0; i < tam; i++) {
        scanf("%d", &num);
        suma += num;
    }

    float prom = suma/i;
    printf("Suma: %f\n", prom);

    return 0;
}