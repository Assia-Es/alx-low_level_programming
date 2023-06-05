#include <stdlib.h>
#include "main.h"


/**
 * _memset - writes the character c to stdout
 * @s: The character to print
 * @b: The character to print
 * @n: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;

return (s);
}

/**
 * _calloc - writes the character c to stdout
 * @size: The character to print
 * @nmemb: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);

_memset(ptr, 0, nmemb * size);
return (ptr);
}
