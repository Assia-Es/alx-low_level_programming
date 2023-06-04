#include "main.h"

/**
 * *_strchr - writes the character c to stdout
 * @s: The character to print
 * @c: The character to print
 * Return: s
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >=  '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
