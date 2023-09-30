#include "main.h"
#include <string.h>
/**
 * is_palindrome_helper - Helper function to
 * check if a number is palindrome recursively
 * @s: The string to check
 * @start: The start index of string
 * @end: The end index of string
 *
 * Return: 1 if is palindrome, 0 otherwise
 */

int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}

if (*(s + start) == *(s + end))
{
is_palindrome_helper(s, start + 1, end - 1);
}
else
{
return (0);
}
}

/**
 * is_palindrome - Checks if string is palindrome or not
 * @s: The string
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
return (is_palindrome_helper(s, 0, strlen(s) - 1));
}
