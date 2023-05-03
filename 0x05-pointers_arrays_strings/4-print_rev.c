#include "main.h"

/**
 * print_rev - writes the character c to stdout
 * @s: The character to print
 */

void print_rev(char *s)
{
int t = 0;
while (*s != '\0')
{
t++;
s++;
}
int l;
s--;
for (l = t; l > 0 ; t--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
