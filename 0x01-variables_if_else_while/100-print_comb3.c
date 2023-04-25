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
for (n = 48 ; n <= 56 ; n++)
{

for (m = n + 1  ; m <= 57 ; m++)
{
putchar(n);
putchar(m);
if(n == 56 && m == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
