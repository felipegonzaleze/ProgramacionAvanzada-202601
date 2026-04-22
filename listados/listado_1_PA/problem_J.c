#include <stdio.h>

int main()
{

    int hours;
    int minutes;
    scanf("%d %d", &hours, &minutes);

    if ((hours < 0 || hours > 23) || (minutes < 0 || minutes > 59))
    {
        return 1;
    }

    if (hours == 0)
    {
        minutes += (24 * 60) - 45;
    }
    else
    {
        minutes += (hours * 60) - 45;
    }

    hours = minutes / 60;
    minutes %= 60;
    printf("%d %d\n", hours, minutes);

    return 0;
}