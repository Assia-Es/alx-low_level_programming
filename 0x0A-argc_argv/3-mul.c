#include <stdio.h>
#include "main.h"

/**
 * _atoi - writes the character c to stdout
 * @s: The character to prin
 * Return: string.
 */
int _atoi(char *s)
{
int i = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;

while (s[len] != '\0')
len++;
while (f < len && f  == '\0')
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
++i;
}
if (f == 0)
return (0);
return (n);
}

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
int r, n, m;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
n = _atoi(argv[1]);
m = _atoi(argv[2]);
r = n *m;

printf("%d\n", r);
return (0);
}
