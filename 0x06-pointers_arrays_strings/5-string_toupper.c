#include "main.h"

/**
 * *string_toupper - writes the character c to stdout
 * @n: The character to print
 * Return: n
 */

char *string_toupper(char *n)
{
int j = 0;

while (n[j] != '\0')
{

if (n[j] >= 'a' && n[j] <= 'z')
n[j] = n[j] - 32;

j++;
}
return (n);
}
