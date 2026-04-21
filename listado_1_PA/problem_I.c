#include <stdio.h>

int main()
{
	int gold;
	int silver;
	int copper;
	scanf("%d %d %d", &gold, &silver, &copper);

	int total_buying_power = (gold * 3) + (silver * 2) + (copper * 1);

	if (total_buying_power / 8 >= 1)
	{
		printf("Province or Gold\n");
	}
	else if (total_buying_power / 6 >= 1)
	{
		printf("Duchy or Gold\n");
	}
	else if (total_buying_power / 5 >= 1)
	{
		printf("Duchy or Silver");
	}
	else if (total_buying_power / 3 >= 1)
	{
		printf("Estate or Silver\n");
	}
	else if (total_buying_power / 2 >= 1)
	{
		printf("Estate or Copper\n");
	}
	else if (total_buying_power < 2)
	{
		printf("Copper\n");
	}

	return 0;
}
