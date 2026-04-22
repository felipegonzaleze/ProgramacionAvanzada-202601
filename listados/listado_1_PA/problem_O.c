#include <stdio.h>

int main()
{

	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if ((a <= 0 || a >= 100) || (b <= 0 || b >= 100) || (c <= 0 || c >= 100) || (d <= 0 || d >= 100))
	{
		return 1;
	}
	int min1 = (a < b) ? a : b;
	int min2 = (c < d) ? c : d;
	int min = (min1 < min2) ? min1 : min2;
	int second_min = (min > min2) ? min1 : min2;

	int max1 = (a > b) ? a : b;
	int max2 = (c > d) ? c : d;
	int max3 = (max1 < max2) ? max1 : max2;

	int second_max = (max3 > second_min) ? max3 : second_min;
	int area = second_max * min;

	printf("%d\n", area);
	return 0;
}
