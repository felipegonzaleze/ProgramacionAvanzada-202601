#include <stdio.h>

int main()
{
    int T;
    int i = 0;
    int max = 2;
    scanf("%d", &T);
    while (i < T)
    {
        int N;
        int not_born_on_zanzibar = 0;
        while (scanf("%d", &N) && N != 0)
        {
            if (N > max)
            {
                not_born_on_zanzibar += N - max;
            }

            max = 2 * N;
        }
        printf("%d\n", not_born_on_zanzibar);
        i++;
    }
}