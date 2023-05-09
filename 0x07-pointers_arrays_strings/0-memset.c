#include "main.h"
#include <stdio.h>
/**
 * *_memset - writes the character c to stdout
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; i > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
