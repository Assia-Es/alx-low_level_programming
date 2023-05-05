#include "main.h"

/**
 * *_strcat - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
int n = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = i ; src[n] != '\0'; j++)
{
dest[j] = src[n];
n++;
}
return (dest);
}
