#include "main.h"

/**
 * *_memcpy - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;

for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
