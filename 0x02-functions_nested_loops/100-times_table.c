#include <stdio.h>
#include "main.h"
/**
 * print_times_table - writen by assia
 * @n: Number
 */
void print_times_table(int n)
{
int i, t, j, r;
r = n * n;
if (n <= 15 && n >= 0)
{
for (j = 0 ; j <= n ; j++)
{
for (i = 0 ; i <= n ; i++)
{
t = j * i;
if (i != n)
{
if (r >= 0 && r <= 9)
printf("%d,   ", t);
if (r >= 10 && r <= 99)
printf("%d,  ", t);
if (r >= 100)
printf("%d,  ", t);
}
else
{
printf("%d", t);
}
}
printf("\n");
}
}
}
