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
size_t i = 0;
size_t size = strlen(str);
char *new_str = (char *)malloc(size + 1);

if (str == NULL)
{
return (NULL);
}

while (i < size)
{
new_str[i] = str[i];
i++;
}
new_str[size] = '\n';

return (new_str);

}
