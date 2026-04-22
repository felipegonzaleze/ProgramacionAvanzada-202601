#include <stdio.h>
#define ALPHABET_LENGTH 26

int main()
{
    const char ALPHABET[] = "ABCDEFGHIJLMNOPQRSTUVXYZ";

    int N;
    int count = 0;
    char problems[ALPHABET_LENGTH];
    char solved[ALPHABET_LENGTH];
    int freq[ALPHABET_LENGTH] = {0};

    while (1)
    {
        scanf("%d", &N);

        // Romper ciclo si el usuario ingresa -1
        if (N == -1)
        {
            break;
        }

        char problem;
        char result[6];

        // Escanear cáracter del problema y resultado
        scanf("%c %s", &problem, result);

        int exists = 0;
        for (int i = 0; i < ALPHABET_LENGTH; i++)
        {
            if (problem == problems[i])
            {
                exists = 1;
            }
        }
    }
}