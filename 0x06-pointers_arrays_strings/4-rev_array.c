#include "main.h"

/**
 * reverse_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 * Return: void
 */
void reverse_array(int *a, int n)
{
int j = 0;
int t;
int i = 0;
for (j = n - 1 ; j >= 0 && i < n-- ; j--)
{
t = a[i];
a[i] = a[j];
a[j] =  t;
i++;
}
}
