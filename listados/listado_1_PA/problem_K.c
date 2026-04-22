#include <stdio.h>

int main()
{
    int easy;
    int medium;
    int hard;
    int total_problems;

    scanf("%d %d %d %d", &easy, &medium, &hard, &total_problems);
    int sum_of_problems = hard + easy + medium;

    if (easy <= 0 || medium <= 0 || hard <= 0 || sum_of_problems < total_problems || total_problems < 3)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}