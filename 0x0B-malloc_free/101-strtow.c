#include "main.h"

/**
 * count_words - count how many words in string
 * @str: string
 *
 * Return: no.of words
*/

int count_words(char *str)
{
int i, count = 0;

for (i = 0; str[i]; i++)
if ((str[i] != ' ' && str[i + 1] == ' ')
|| (str[i] != ' ' && str[i + 1] == '\0'))
count++;
return (count);
}

/**
 * strtow - splits a string into words
 * @str: string that want split it words
 *
 * Return: Null or pointer to new string
*/

char **strtow(char *str)
{
int i, j, k, m, words = count_words(str);
char **array;

if (str == NULL || *str == '\0' || words == 0)
return (NULL);

array = malloc((words + 1) * sizeof(char *));
if (array == NULL)
return (NULL);

for (i = 0, m = 0; m < words; m++)
{
while (str[i] == ' ')
i++;
for (j = i; str[j] && str[j] != ' '; j++)
;
array[m] = malloc((j - i + 1) * sizeof(char));
if (array[m] == NULL)
{
while (m >= 0)
free(array[m--]);
free(array);
return (NULL);
}
for (k = 0; i < j; i++, k++)
array[m][k] = str[i];
array[m][k] = '\0';
}
array[m] = NULL;
return (array);
}
