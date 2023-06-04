#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: On success 0.or 1
 */
int main(int argc, char *argv[])
{
int num, j, r;
int c[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
r = 0;
if (num < 0)
{
printf("0\n");
return (0);
}
for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= c[j])
{
r++;
num -= c[j];
}
}

printf("%d\n", r);
return (0);
}
