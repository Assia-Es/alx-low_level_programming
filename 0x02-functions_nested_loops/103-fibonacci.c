#include <stdio.h>

/**
 * main -  Fibonacci sequence is generated by adding the previous two terms
 *
 * Return: Alwayes 0.
 */
int main(void)
{
int i;
unsigned long k = 2, j = 1, sum = 0, next;
for (i = 1; i <= 33; i++)
{
if (j < 4000000 && (j % 2) == 0)
sum = sum + j;
next = j + k;
j = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
