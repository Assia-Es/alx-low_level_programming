#include "main.h"

/**
 * *leet - writes the character c to stdout
 * @n: The character to print
 * Return: n
 */

char *leet(char *n)
{
int j, i;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == s1[j])
{
n[i] = s2[j];
}
}
}
return (n);
}
