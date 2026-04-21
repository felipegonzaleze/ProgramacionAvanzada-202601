#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) && N != 0)
    {
        int sum_of_N = 0;
        int sum_of_n_multiplied = 0;
        int copy_of_N = N;
        while (copy_of_N != 0)
        {
            sum_of_N += copy_of_N % 10;
            copy_of_N /= 10;
        }
        int minimal_number;
        for (int p = 11; sum_of_N != sum_of_n_multiplied; p++)
        {
            sum_of_n_multiplied = 0;
            int n_multiplied = N * p;
            while (n_multiplied != 0)
            {
                sum_of_n_multiplied += n_multiplied % 10;
                n_multiplied /= 10;
            }
            minimal_number = p;
        }

        printf("%d\n", minimal_number);
    }
    return 0;
}