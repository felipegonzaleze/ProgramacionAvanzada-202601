#include <stdio.h>
#include <string.h>

int main(void)
{
    int N;
    char answers[101];
    int freq[3] = {0};

    char adrian[] = "ABC";
    char bruno[] = "BABC";
    char goran[] = "CCAABB";

    scanf("%d", &N);
    scanf("%s", answers);

    for (int i = 0; i < N; i++)
    {
        if (answers[i] == adrian[i % 3])
            freq[0]++;
        if (answers[i] == bruno[i % 4])
            freq[1]++;
        if (answers[i] == goran[i % 6])
            freq[2]++;
    }

    int largest = freq[0];
    for (int i = 1; i < 3; i++)
    {
        if (freq[i] > largest)
            largest = freq[i];
    }

    printf("%d\n", largest);
    if (freq[0] == largest)
        printf("Adrian\n");
    if (freq[1] == largest)
        printf("Bruno\n");
    if (freq[2] == largest)
        printf("Goran\n");

    return 0;
}