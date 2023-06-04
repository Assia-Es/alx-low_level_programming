#include "main.h"

/**
 * *_strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
