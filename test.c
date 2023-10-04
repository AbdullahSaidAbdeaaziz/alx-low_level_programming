#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *__strdup(char *str)
{
    char *new_str = (char *)malloc(sizeof(char*));
    size_t size = strlen(str);
    size_t i = 0;

    if (str == NULL)
    {
        return (NULL);
    }


    while (i < size)
    {
        new_str[i] = str[i];
        i++;
    }

    return (new_str);
}

int main(void)
{
    char *s;

    s = __strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (1);
}