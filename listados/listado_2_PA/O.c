#include <stdio.h>
#include <string.h>

int main()
{
    char word[31];
    scanf("%s", word);

    for (int i = 0; i < strlen(word) - 1; i++)
    {
        if (word[i] == 's' && word[i] == word[i + 1])
        {
            printf("hiss\n");
            return 0;
        }
    }
    printf("no hiss\n");
    return 0;
}