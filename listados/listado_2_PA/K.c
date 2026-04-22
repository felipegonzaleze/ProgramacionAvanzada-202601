#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000001];
    scanf("%s", input);
    int whitespaces = 0;
    int lowercase_letters = 0;
    int uppercase_letters = 0;
    int symbols = 0;
    int input_len = strlen(input);

    for (int i = 0; i < input_len; i++)
    {
        if (input[i] == '_')
        {
            whitespaces++;
        }
        else if (input[i] >= 97 && input[i] <= 122)
        {
            lowercase_letters++;
        }
        else if (input[i] >= 65 && input[i] <= 90)
        {
            uppercase_letters++;
        }
        else
        {
            symbols++;
        }
    }
    printf("%.16f\n", (double)whitespaces / input_len);
    printf("%.16f\n", (double)lowercase_letters / input_len);
    printf("%.16f\n", (double)uppercase_letters / input_len);
    printf("%.16f\n", (double)symbols / input_len);
}