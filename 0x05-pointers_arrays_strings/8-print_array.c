#include "main.h"

/**
 * print_array - writes the character c to stdout
 * @a: The character to print
 * @n: The character to print
 */

void print_array(int *a, int n)
{

int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d\n", a[n - 1]);
}

}
