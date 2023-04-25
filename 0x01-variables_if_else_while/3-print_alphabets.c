#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: alphabet in lowercase, and then in uppercase
 * Return: always 0
 */
int main(void)
{
int n;

for (n = 97 ; n <= 122 ; n++)
{
putchar(n);
}
for (n = 65 ; n <= 90 ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
