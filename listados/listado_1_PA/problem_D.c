#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main()
{

	int wall_height;
	int ladder_degrees;
	scanf("%d %d", &wall_height, &ladder_degrees);

	if ((wall_height < 1 || wall_height > 10000) || (ladder_degrees < 1 || ladder_degrees > 89))
	{
		return 1;
	}

	float degrees_to_radians = ladder_degrees * (PI / 180);
	int ladder_centimeters = ceil(wall_height / sin(degrees_to_radians));
	printf("%d\n", ladder_centimeters);
	return 0;
}
