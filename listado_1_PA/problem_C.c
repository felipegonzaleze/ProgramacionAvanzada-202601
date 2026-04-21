#include <stdio.h>
#include <math.h>

int main()
{

	float english_miles_distance;
	scanf("%f", &english_miles_distance);

	if (english_miles_distance < 0 || english_miles_distance > 1000)
	{
		return 1;
	}

	float english_to_roman_paces = ((5280.0 / 4854.0) * 1000.0);
	int closest_roman_paces = round(english_to_roman_paces * english_miles_distance);
	printf("%d\n", closest_roman_paces);
	return 0;
}
