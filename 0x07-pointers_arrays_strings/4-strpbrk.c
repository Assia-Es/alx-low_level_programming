#include "main.h"

/**
 * *_strpbrk - writes the character c to stdout
 * @s: The character to print
 * @accept: The character to print
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
rerurn (s);
}
s++;
}
return ('\0');
}
