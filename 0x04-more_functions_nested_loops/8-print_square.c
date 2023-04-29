#include "main.h"
#include <stdio.h>

/**
 * print_square - for uppercase character..
 *
 * @size: Number.
 */

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
