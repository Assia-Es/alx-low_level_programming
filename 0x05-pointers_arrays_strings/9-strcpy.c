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
int len = 0;
int j, i;

while (*(src + leng) != '\0')
{
leng++;
}

while (*(dest + len) != '\0')
{
len++;
}
i = 0;
for (j = (len + 1) ; i <= leng; j++)
{
dest[j] = src[i];
i++;
}
j++;
dest[j] =  '\0';
return (dest);
}
