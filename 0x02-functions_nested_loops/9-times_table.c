#include "main.h"
/**
 *times_table- writen by assia
 *
 * Return: no return
 */
void times_table(void)
{
int a, i, t;
for (a = 0 ; a <= 9 ; a++)
{
for (i = 0 ; i <= 9 ; i++)
{
t = a * i;
_putchar(t * 49);
_putchar(44);
_putchar(32);
}
_putchar('\n');
}
}
