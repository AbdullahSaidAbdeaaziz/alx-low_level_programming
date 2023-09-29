#include "main.h"

/**
 * _puts_recursion - Implementation
 *
 * Description: print string in recursion way
 * @s: string
 *
 * Return: None
 */

void _puts_recursion(char* s)
{
    if (*s == '\0'){
      return;
    }
    _puthchar(*s);
    _puts_recursion(s + 1);
}