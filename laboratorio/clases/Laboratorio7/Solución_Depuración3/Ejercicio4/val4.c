#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        arr[i] = i;
    }

    int suma = 0;

    for(int i = 0; i < n; i++){
        suma += arr[i];
    }

    printf("Suma = %d\n", suma);

    free(arr);
    return 0;
}