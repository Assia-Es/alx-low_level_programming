#include "main.h"

/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 * return: 0
 */

void print_rev(char *s)
{
int t = 0;
int l;
while (*s != '\0')
{
t++;
s++;
}
s--;
for (l = t; l > 0; t--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
