#include <stdio.h>

int main()
{
	int n;
	int h;
	int v;
	scanf("%d %d %d", &n, &h, &v);

	if ((n < 2 || n > 10000) || (h <= 0 || h >= n) || (v <= 0 || v >= n))
	{
		return 1;
	}

	int piece1 = h * v;
	int piece2 = (n - h) * v;
	int piece3 = h * (n - v);
	int piece4 = (n - h) * (n - v);

	int max1 = piece1 > piece2 ? piece1 : piece2;
	int max2 = piece3 > piece4 ? piece3 : piece4;
	int max = max1 > max2 ? max1 : max2;
	printf("%d\n", max * 4);
	return 0;
}
