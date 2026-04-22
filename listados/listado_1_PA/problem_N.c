#include <stdio.h>

int main()
{

    int X;
    int Y;
    scanf("%d %d", &X, &Y);

    if ((X < -100 || X > 100) || (Y < 1 || Y > 100))
    {
        return 1;
    }

    float m = (float)1 / Y;
    float c = m * X * -1;

    if (m == 1 && c == 0)
    {
        printf("ALL GOOD\n");
    }
    else if (m == 1 && c != 0)
    {
        printf("IMPOSSIBLE\n");
    }
    else
    {
        printf("%f\n", c / (1 - m));
    }
    return 0;
}