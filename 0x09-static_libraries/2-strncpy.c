#include "main.h"

/**
 * *_strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;

while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}

while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
