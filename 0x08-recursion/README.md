# Tasks

---

1. Write a function that prints a string, followed by a new line.

- Prototype: `void _puts_recursion(char *s);`
FYI: `The standard library provides a similar function: puts. Run man puts to learn more.`

```shell
julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
Puts with recursion
julien@ubuntu:~/0x08. Recursion$
```

---

2. Write a function that prints a string, followed by a new line.

- Prototype: `void _puts_recursion(char *s);`
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

```shell
julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
# include "main.h"

/**

* main - check the code
*
* Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion
Puts with recursion
julien@ubuntu:~/0x08. Recursion$
```

---

3. Write a function that returns the length of a string.

- Prototype: `int _strlen_recursion(char *s);`
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

```shell
julien@ubuntu:~/0x08. Recursion$ cat 2-main.c
# include "main.h"
# include <stdio.h>

/**

- main - check the code
*
- Return: Always 0.
 */
int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion
14
julien@ubuntu:~/0x08. Recursion$
```

---

4. Write a function that returns the factorial of a given number.

- Prototype: `int factorial(int n);`
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1

```shell
julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
# include "main.h"
# include <stdio.h>

/**

- main - check the code
*
- Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x08. Recursion$ ./3-factorial
1
120
3628800
-1
julien@ubuntu:~/0x08. Recursion$
```

---
