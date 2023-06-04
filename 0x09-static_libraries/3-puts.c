#include "main.h"

/**
 * _puts - writes the character c to stdout
 * @str: The character to print
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}

_putchar('\n');
}
