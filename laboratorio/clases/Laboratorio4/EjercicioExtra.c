#include <stdio.h>

int main()
{
	int cantidad;
	int precio;
	char inicial;

	while (1)
	{

		printf("Introduzca su incial: ");
		scanf(" %c", &inicial);

		if (inicial == '.')
		{
			break;
		}

		printf("Introduzca el precio del producto: ");
		scanf(" %d", &precio);
		printf("Introduzca la cantidad del producto: ");
		scanf(" %d", &cantidad);

		int total = cantidad * precio;
		printf("Hola %c, el total de su compra es de %d\n", inicial, total);
	}
}
