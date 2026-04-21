#include <stdio.h>

int main()
{
	int people;
	int chicken_pieces;
	scanf("%d %d", &people, &chicken_pieces);
	int diff = people - chicken_pieces;

	if (diff > 0 && diff != 1)
	{
		printf("Dr. Chaz needs %d more pieces of chicken!\n", diff);
	}
	else if (diff > 0 && diff == 1)
	{
		printf("Dr. Chaz needs 1 more piece of chicken!\n");
	}
	else if (diff < 0 && diff != -1)
	{
		diff *= -1;
		printf("Dr. Chaz will have %d pieces of chicken left over!\n", diff);
	}
	else if (diff < 0 && diff == -1)
	{
		printf("Dr. Chaz will have 1 piece of chicken left over!\n");
	}

	return 0;
}
