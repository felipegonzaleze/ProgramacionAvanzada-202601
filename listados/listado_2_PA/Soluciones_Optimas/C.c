#include <stdio.h>

int main(void)
{
    int N;

    while (scanf("%d", &N) == 1 && N != 0)
    {
        int sumN = 0;
        int temp = N;

        while (temp > 0)
        {
            sumN += temp % 10;
            temp /= 10;
        }

        int p = 11;

        while (1)
        {
            int product = N * p;
            int sumProduct = 0;

            while (product > 0)
            {
                sumProduct += product % 10;
                product /= 10;
            }

            if (sumProduct == sumN)
                break;

            p++;
        }

        printf("%d\n", p);
    }

    return 0;
}