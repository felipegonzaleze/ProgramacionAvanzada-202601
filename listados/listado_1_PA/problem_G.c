#include <stdio.h>

int main()
{
	int l;
	int r;
	scanf("%d %d", &l, &r);

	if ((l < 0 || l > 20) || (r < 0 || r > 20))
	{
		return 1;
	}

	int sum_of_tines = l + r;

	if (l + r == 0)
	{
		printf("Not a moose\n");
	}
	else if (l == r)
	{
		printf("Even %d\n", sum_of_tines);
	}
	else
	{
		printf("Odd %d\n", (l > r ? l : r) * 2);
	}
	return 0;
}
