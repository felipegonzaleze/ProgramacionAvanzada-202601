#include <stdio.h>

int main(){
    int arr[5] = {0};

    int suma = 0;

    for(int i = 0; i < 5; i++){
        suma += arr[i];
    }

    printf("Suma = %d\n", suma);
    return 0;
}