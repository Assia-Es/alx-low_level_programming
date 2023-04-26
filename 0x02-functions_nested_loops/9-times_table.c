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
if (i == 10)
{
_putchar(t + '0');
}
if (t < 10 && i != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(t + '0');
}
else if (t >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((t / 10) + '0');
_putchar((t % 10) + '0');
}
}
_putchar('\n');

}
}
