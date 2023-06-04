#include "main.h"

/**
 * char *_strcpy - writes the character c to stdout
 * @src: The character to print
 * @dest: The character to print
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
int leng = 0;
int j;

while (*(src + leng) != '\0')
{
leng++;
}

for (j = 0; j < leng; j++)
{
dest[j] = src[j];
}

dest[leng] = '\0';
return (dest);
}
