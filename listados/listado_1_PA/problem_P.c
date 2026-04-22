#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, t;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    scanf("%d", &t);

    int distance = abs(c - a) + abs(d - b);

    if (distance <= t && (t - distance) % 2 == 0)
    {
        printf("Y\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}