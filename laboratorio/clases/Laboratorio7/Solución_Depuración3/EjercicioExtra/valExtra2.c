#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *datos;
    int n;
} Lista;

void llenar(Lista *l){
    for(int i = 0; i < l->n; i++){
        l->datos[i] = i * 2;
    }
}

int sumar(Lista *l){
    int suma = 0;

    for(int i = 0; i < l->n; i++){
        suma += l->datos[i];

        if(l->datos[i] % 2 == 0){
            i++;
        }
    }

    return suma;
}

int main(){
    Lista l;

    l.n = 5;
    l.datos = malloc(l.n * sizeof(int));

    llenar(&l);

    int resultado = sumar(&l);
    free(l.datos);
    printf("Resultado = %d\n", resultado);

    return 0;
}