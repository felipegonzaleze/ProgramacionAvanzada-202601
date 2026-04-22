#include <stdio.h>

int main()
{
	int articles;
	int impact_factor;
	scanf("%d %d", &articles, &impact_factor);

	if ((articles < 1 || articles > 100) || (impact_factor < 1 || impact_factor > 100))
	{
		return 1;
	}

	int minimal_scientists = ((impact_factor - 1) * articles) + 1;
	printf("%d\n", minimal_scientists);
	return 0;
}
