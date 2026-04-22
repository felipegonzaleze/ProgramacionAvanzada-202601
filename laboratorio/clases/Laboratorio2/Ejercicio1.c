#include <stdio.h>
#include <stdbool.h>

int main() {
	int edad;
	float precio;
	bool es_valido;
	char inicial;

	printf("Edad? ");
	scanf(" %d", &edad);
	printf("Precio? ");
	scanf(" %f", &precio);
	printf("Es válido? ");
	scanf(" %d", &es_valido);
	printf("Incial? ");
	scanf(" %c", &inicial);

	printf("Edad: %d\n", edad);
	printf("Precio: %f\n", precio);
	printf("Valido: %d\n", es_valido);
	printf("Inicial: %c\n", inicial);
}

