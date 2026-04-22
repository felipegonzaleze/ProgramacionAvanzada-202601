#include <stdio.h>

int main(void)
{
    int n, t;
    int count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if (t < 0)
            count++;
    }

    printf("%d\n", count);
    return 0;
}