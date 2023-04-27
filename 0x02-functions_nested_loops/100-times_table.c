#include <stdio.h>
#include "main.h"
/**
 * print_times_table - writen by assia
 * @n: Number
 */
void print_times_table(int n)
{
int i, t, j;
if (n == 0)
printf("0");
if (n <= 15 && n > 0)
{
for (j = 0  ; j <= n ; j++)
{
printf("0,");
for (i = 1 ; i <= n ; i++)
{
t = j * i;
if (i != n)
{
if (t >= 0 && t <= 9)
printf("   %d,", t);
if (t > 9 && t <= 99)
printf("  %d,", t);
if (t >= 100)
printf(" %d,", t);
}
else
{
if (t >= 0 && t <= 9)
printf("   %d", t);
if (t > 9 && t <= 99)
printf("  %d", t);
if (t >= 100)
printf(" %d", t);
}
}
printf("\n");
}
}
}
