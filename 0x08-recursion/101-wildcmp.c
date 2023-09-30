#include "main.h"
/**
 * wildcmp - compare 2 string to check they are
 * right or not using REGEX(*) only in second string
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if there are equals, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0')))
{
return (1);
}
if (*s1 == *s2 || *s2 == '*')
{
if (*s2 == '*')
{
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
{
return (1);
}
}
else
{
return (wildcmp(s1 + 1, s2 + 1));
}
}
return (0);
}
