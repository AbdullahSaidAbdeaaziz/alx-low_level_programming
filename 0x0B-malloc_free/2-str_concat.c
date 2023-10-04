#include "main.h"
#include <string.h>

/**
 * str_concat - combine 2 string
 * @s1: first string
 * @s2: second string
 *
 * Return: combined string
*/

char *str_concat(char *s1, char *s2)
{
char *all_str;
size_t total_size, i, size1, size2;
if (s1 == NULL && s2 == NULL)
{
return (NULL);
}
size1 = strlen(s1);
size2 = strlen(s2);
total_size = size1 < 0 ? 0 : size1 + size2 < 0 ? 0 : size1;
all_str = (char *)malloc(total_size *sizeof(char) + 1);

if (all_str == NULL)
{
return (NULL);
}

i = 0;
while (i < total_size)
{
if (i < size1)
{
all_str[i] = s1[i];
}
else
{
all_str[i] = s2[i - size1];
}
i++;
}
all_str[i] = '\0';
return (all_str);
}
