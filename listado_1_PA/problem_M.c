#include <stdio.h>

int main()
{

    int A;
    int B;
    scanf("%d %d", &A, &B);

    int A_hundreds = A / 100;
    A -= A_hundreds * 100;
    int A_tens = A / 10;
    A -= A_tens * 10;
    int A_units = A;
    A = A_hundreds + A_tens * 10 + A_units * 100;

    int B_hundreds = B / 100;
    B -= B_hundreds * 100;
    int B_tens = B / 10;
    B -= B_tens * 10;
    int B_units = B;
    B = B_hundreds + B_tens * 10 + B_units * 100;

    printf("%d\n", A > B ? A : B);
    return 0;
}