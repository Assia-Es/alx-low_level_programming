#include "main.h"
/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: length
 */
int _strlen(char *s)
{
int t = 0;
while (*s != '\0')
{
t++;
s++;
}
return (t);
}
