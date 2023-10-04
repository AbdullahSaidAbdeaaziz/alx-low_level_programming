#include "main.h"
#include <string.h>
/**
 * _strdup - duplicate whole string we given,
 * and then we can free it from memory if we
 * want
 * @str: string
 * Return: new malloc string
 */

char *_strdup(char *str)
{
size_t i;
size_t size;
char *new_str;

if (str == NULL)
{
return (NULL);
}

size = strlen(str);
new_str = (char *)malloc(size *sizeof(*str) + 1);
i = 0;
if (new_str == NULL)
{
return (NULL);
}
i = 0;
size = strlen(str);
while (i < size)
{
new_str[i] = str[i];
i++;
}

return (new_str);
}
