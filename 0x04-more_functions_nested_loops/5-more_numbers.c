root@31e2fc51f300:~/alx-low_level_programming/0x04-more_functions_nested_loops# cat 0-isupper.c
#include "main.h"
#include <stdio.h>

/**
 * more_numbers-  for uppercase character..
 *
 * Return: void.
 */
void more_numbers(void)
{
int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
}
_putchar('\n');
}
}
