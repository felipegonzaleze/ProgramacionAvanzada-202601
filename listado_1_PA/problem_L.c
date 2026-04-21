#include <stdio.h>

int main()
{

    int pillars;
    scanf("%d", &pillars);

    if (pillars < 1 || pillars > 100)
    {
        return 1;
    }

    if (pillars >= 1 && pillars <= 3)
    {
        printf("1\n");
    }
    else
    {
        printf("%d\n", pillars - 3 + 1);
    }

    return 0;
}