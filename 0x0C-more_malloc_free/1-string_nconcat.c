#include "main.h"
#include <string.h>
/**
 * string_nconcat - allocate new space in memory which contains
 * s1, followed by first n bytes of s2, and null terminated.
 * @s1: first string
 * @s2: second string that will takes n bytes from it.
 * @n: number of bytes
 *
 * Return: 98 if malloc is failed, otherwise pointer
 * to allocate memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str;
    size_t i, j, s1_len, s2_len;
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    s1_len = strlen(s1);
    s2_len = strlen(s2);
    if (n < s2_len){
        s2_len = n;
    }
    str = malloc(s1_len + s2_len + 1);
    if (str == NULL)
    {
        return (NULL);
    }
    for(i = 0; i < s1_len; i++)
    {
        str[i] = s1[i];
    }
    for(j = 0; j < s2_len; j++, i++)
    {
        str[i] = s2[j];
    }
    str[i] = '\0';
    return (str);
}

