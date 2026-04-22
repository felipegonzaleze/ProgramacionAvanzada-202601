#include <stdio.h>
#include <math.h>

int main()
{
	int numero;
	scanf("%d", &numero);

	if (numero < 1 || numero > 15)
	{
		return 1;
	}

	int resultado = pow(pow(2, numero) + 1, 2);
	printf("%d\n", resultado);
	return 0;
}
