#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    int N;
    char str1[51];
    char str2[51];
    scanf("%d", &N);
    while (i < N)
    {
        scanf("%s", str1);
        scanf("%s", str2);

        int str_len = strlen(str1);
        char new_str[51];
        for (int j = 0; j < str_len; j++)
        {
            if (str1[j] == str2[j])
            {
                new_str[j] = '.';
            }
            else
            {
                new_str[j] = '*';
            }
        }
        new_str[str_len] = '\0';
        printf("%s\n", str1);
        printf("%s\n", str2);
        printf("%s\n", new_str);
        printf("\n");
        i++;
    }
}