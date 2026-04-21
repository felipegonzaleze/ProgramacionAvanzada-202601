#include <stdio.h>

int main()
{

    int n;
    int t;
    int t_less_than_zero = 0;
    scanf("%d", &n);
    int i = 0;
    while (i != n)
    {
        scanf("%d", &t);
        if (t < 0)
        {
            t_less_than_zero++;
        }
        i++;
    }
    printf("%d\n", t_less_than_zero);
    return 0;
}