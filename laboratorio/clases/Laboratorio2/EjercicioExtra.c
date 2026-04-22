#include <stdio.h>

int main () {
	typedef struct Cliente {
		int cantidad;
		int precio;
		char inicial;
	} cliente_t;

	cliente_t cliente;

	printf("Introduzca su incial: ");
	scanf(" %c", &cliente.inicial);
	printf("Introduzca el precio del producto: ");
	scanf(" %d", &cliente.precio);
	printf("Introduzca la cantidad del producto: ");
	scanf(" %d", &cliente.cantidad);

	int total = cliente.cantidad * cliente.precio;
	printf("Hola %c, el total de su compra es de %d\n", cliente.inicial, total);

}
