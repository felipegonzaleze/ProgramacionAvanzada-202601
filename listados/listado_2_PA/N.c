#include <stdio.h>

int main()
{
    int freq[3] = {0};
    char adrian[] = "ABCABCABCABC";
    char bruno[] = "BABCBABCBABC";
    char goran[] = "CCAABBCCAABB";
    char answers[101];
    int N;

    scanf("%d", &N);
    scanf("%s", answers);

    for (int i = 0; i < N; i++)
    {
        if (adrian[i % 12] == answers[i])
            freq[0]++;
        if (bruno[i % 12] == answers[i])
            freq[1]++;
        if (goran[i % 12] == answers[i])
            freq[2]++;
    }

    int largest = 0;
    for (int i = 0; i < 3; i++)
    {
        if (freq[i] > largest)
        {
            largest = freq[i];
        }
    }

    printf("%d\n", largest);
    if (freq[0] == largest)
    {
        printf("Adrian\n");
    }
    if (freq[1] == largest)
    {
        printf("Bruno\n");
    }
    if (freq[2] == largest)
    {
        printf("Goran\n");
    }
    return 0;
}