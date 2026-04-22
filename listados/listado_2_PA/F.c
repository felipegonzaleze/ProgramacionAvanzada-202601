#include <stdio.h>
#define NUM_CARDS 13

int main()
{
    char CARDS[] = "A23456789TJQK";
    int freq[NUM_CARDS] = {0};
    int i = 0;
    char c[5];
    int strength = 0;

    while (i < 5)
    {
        scanf("%s", c);
        for (int j = 0; j < NUM_CARDS; j++)
        {
            if (c[0] == CARDS[j])
            {
                freq[j]++;
            }
        }
        i++;
    }

    for (int j = 0; j < NUM_CARDS; j++)
    {
        if (freq[j] > strength)
        {
            strength = freq[j];
        }
    }

    printf("%d\n", strength);
    return 0;
}