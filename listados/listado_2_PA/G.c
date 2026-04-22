#include <stdio.h>

int main()
{
    int N, X, min, pos = 0;
    scanf("%d", &N);
    scanf("%d", &min);

    for (int i = 1; i < N; i++)
    {
        scanf("%d", &X);

        if (X < min)
        {
            min = X;
            pos = i;
        }
    }

    printf("%d\n", pos);
    return 0;
}