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

for (n = 48 ; n <= 57 ; n++)
{
putchar(n);
n = n + 1;
putchar(n);
n = n - 1;
if (n == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
