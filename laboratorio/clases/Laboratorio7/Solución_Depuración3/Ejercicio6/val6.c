#include <stdio.h>
#include <stdlib.h>

int main(){
    char *str = malloc(5 * sizeof(char));

    str[0] = 'H';
    str[1] = 'o';
    str[2] = 'l';
    str[3] = 'a';
    str[4] = '\0';

    printf("%s\n", str);

    free(str);
    return 0;
}