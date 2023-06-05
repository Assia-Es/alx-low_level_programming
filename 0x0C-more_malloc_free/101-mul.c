#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ERR_MSG "Error"

/**
 * is_digit - writes the character c to stdout
 * @s: The character to prin
 * Return: succes
 */
int is_digit(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}
return (1);
}

/**
 * _strlen - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * errors - writes the character c to stdout
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
char *s1, *s2;
int len1, len2, len, i, c, d1, d2, *r, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;
r = malloc(sizeof(int) * len);
if (!r)
return (1);
for (i = 0; i <= len1 + len2; i++)
r[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{
d1 = s1[len1] - '0';
c = 0;
for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
{
d2 = s2[len2] - '0';
c += r[len1 + len2 + 1] + (d1 * d2);
r[len1 + len2 + 1] += c % 10;
c /= 10;
}
if (c > 0)
r[len1 + len2 + 1] += c;
}
for (i = 0; i < len - 1; i++)
{
if (r[i])
a = 1;
if (a)
_putchar(r[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(r);
return (0);
}
