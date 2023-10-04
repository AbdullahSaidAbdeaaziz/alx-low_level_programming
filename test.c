#include <stdio.h>
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
    char *arr = (char *)malloc(sizeof(char) * size);
    if (size <= 0 || arr == NULL)
    {
        return (NULL);
    }


    while (size--)
    {
        *(arr + size) = c;
    }
    return arr;
}

int main(void)
{
    char *arr = create_array(2, 'A');

    printf("%c", arr[0]);
    return (1);
}