#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: alphabet in lowercase
 * Return: always 0
 */
int main(void)
{
int n;
int m;
int p;
for (n = 48 ; n <= 55 ; n++)
{

for (m = n + 1  ; m <= 56 ; m++)
{
for (p = m + 1  ; m <= 57 ; m++)
{
putchar(n);
putchar(m);
putchar(p);
if (n == 56 && m == 57 && p == 55)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
