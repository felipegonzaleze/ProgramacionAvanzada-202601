#include <stdio.h>

int main()
{
    int X;
    int N;
    int P;

    int megabytes_in_month_n = 0;
    int i = 0;

    scanf("%d", &X);
    scanf("%d", &N);

    while (i < N)
    {
        scanf("%d", &P);
        megabytes_in_month_n += X - P;
        i++;
    }
    printf("%d\n", megabytes_in_month_n + X);
    return 0;
}