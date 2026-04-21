#include <stdio.h>
#include <string.h>

int main()
{
    int c = 0;
    char input[101];
    char output[51];
    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++)
    {
        if (i == 0)
        {
            output[c] = input[i];
            c++;
            continue;
        }
        else if (input[i] == '-')
        {
            output[c] = input[i + 1];
            c++;
        }
    }
    output[c] = '\0';
    printf("%s\n", output);
}