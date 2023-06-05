#include <stdlib.h>
#include "main.h"

/**
 * array_range - writes the character c to stdout
 * @min: The character to print
 * @max: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int *array_range(int min, int max)
{
int *ptr;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
