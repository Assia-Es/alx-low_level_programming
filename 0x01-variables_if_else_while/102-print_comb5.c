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
int m = 0;
int p = 0;
int t = 48;
for (n = 48 ; n <= 57 ; n++)
{

for (m = 48  ; m <= 56 ; m++)
{
for (p = 48  ; p <= 55 ; p++)
{
for (t = 49  ; t <= 57 ; t++)
{
putchar(n);
putchar(m);
putchar(' ');
putchar(p);
putchar(t);
if (n == 57 && m == 56 && p == 55 && t == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
t = t - 1;
}
}
}
putchar('\n');
return (0);
}
