#include <stdio.h>

int main(void)
{
    int X, N, P;
    int total = 0;

    scanf("%d %d", &X, &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &P);
        total += X - P;
    }

    printf("%d\n", total + X);
    return 0;
}