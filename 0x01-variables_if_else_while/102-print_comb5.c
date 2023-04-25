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
int t;
for (n = 48 ; n <= 57 ; n++)
{

for (m = 48  ; m <= 56 ; m++)
{
for (p = 48  ; p <= 57 ; p++)
{
for (t = p + 1  ; t <= 57 ; t++)
{
putchar(n);
putchar(m);
putchar(' ');
putchar(p);
putchar(t);
if (n == 57 && m == 56 && p == 57 && t == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
