/*
 * File: 102-fibonacci.c
 * Auth: assia
 */
#include <stdio.h>
/**
 * main - ana ecrire
 *
 * Return: Alwayes 0.
 */
int main(void)
{
int c;
unsigned long f1, f2, sum; 
for (c = 0; c < 50 ; c++)
{
sum = f1 + f2;
printf("%lu", sum);
f1 = f2;
f2 = sum;
if (c == 49)
{
      printf("\n");
}
else
{
	printf(", ");
}

return (0);
}
}
