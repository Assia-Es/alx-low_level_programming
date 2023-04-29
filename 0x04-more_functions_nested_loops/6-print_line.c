#include "main.h"
#include <stdio.h>

/**
 * print_line - for uppercase character..
 *
 * @n: Number.
 */

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
}
_putchar('\n');

}
