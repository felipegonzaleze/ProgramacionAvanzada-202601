#include <stdio.h>

int main()
{

	int x;
	int y;
	int quadrant;

	scanf("%d", &x);
	scanf("%d", &y);

	if ((x == 0 || x < -1000 || x > 1000) || (y == 0 || y < -1000 || y > 1000))
	{
		return 1;
	}

	if (x > 0 && y > 0)
	{
		quadrant = 1;
	}
	else if (x > 0 && y < 0)
	{
		quadrant = 4;
	}
	else if (x < 0 && y > 0)
	{
		quadrant = 2;
	}
	else if (x < 0 && y < 0)
	{
		quadrant = 3;
	}

	printf("%d\n", quadrant);
	return 0;
}
