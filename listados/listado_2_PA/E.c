#include <stdio.h>

int main()
{
    int i = 0;
    int modulos[10];
    int distinct_numbers = 0;
    int D;
    int number;

    while (i < 10)
    {

        scanf("%d", &D);
        int modulo = D % 42;
        int exists = 0;

        for (int j = 0; j < distinct_numbers; j++)
        {
            if (modulos[j] == modulo)
            {
                exists = 1;
                break;
            }
        }

        if (exists != 1)
        {
            modulos[distinct_numbers] = modulo;
            distinct_numbers++;
        }
        i++;
    }
    printf("%d\n", distinct_numbers);
}