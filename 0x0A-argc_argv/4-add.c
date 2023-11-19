#include <stdio.h>
#include <stdlib.h>
/**
 * main - sum all numbers pass by options
 * @argc: length of options
 * @argv: list of options
 *
 *
 * Return: 1 success
 */

int main(int argc, char *argv[])
{
    int i,  sum = 0;
    char *c;
    for (i = 1; i < argc; i++)
    {
        c = argv[i];
        while(*c != NULL)
        {
            if (*c > 9 || *c < 0)
            {
                return (printf("Error\n"), 1);
            }
            c++;
        }
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    return (1);
}
