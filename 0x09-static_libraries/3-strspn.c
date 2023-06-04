#include "main.h"

/**
 * _strspn - writes the character c to stdout
 * @s: The character to print
 * @accept: The character to print
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int r;

while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
