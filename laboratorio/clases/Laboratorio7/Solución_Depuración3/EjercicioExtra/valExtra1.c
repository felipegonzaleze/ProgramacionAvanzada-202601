#include <stdio.h>
#include <stdlib.h>

typedef struct Celda {
    int valor;
} Celda;

int main(){
    Celda **mat;

    mat = malloc(2 * sizeof(Celda*));

    for(int i = 0; i < 2; i++){
        mat[i] = malloc(2 * sizeof(Celda));
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            mat[i][j].valor = i + j;
        }
    }

    for (int i = 0; i < 2; i++) {
        free(mat[i]);
    }

    free(mat);
    
    printf("Fin\n");
    return 0;
}