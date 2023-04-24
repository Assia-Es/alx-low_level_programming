#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: I play what I call the alphabet game
 * Return: always 0
 */
int main(void)
{
int n;

for (n = 97 ; n <= 122 ; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
