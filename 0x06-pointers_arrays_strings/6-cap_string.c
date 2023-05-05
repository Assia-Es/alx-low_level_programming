#include "main.h"

/**
 * *cap_string - writes the character c to stdout
 * @n: The character to print
 * Return: n
 */

char *cap_string(char *n)
{
int j = 0;

while (n[j])
{
while (!(n[j] >= 'a' && n[j] <= 'z'))
{
j++;
}
if (n[j - 1] == ' ' ||
n[j - 1] == '\t' ||
n[j - 1] == '\n' ||
n[j - 1] == ',' ||
n[j - 1] == ';' ||
n[j - 1] == '.' ||
n[j - 1] == '!' ||
n[j - 1] == '?' ||
n[j - 1] == '"' ||
n[j - 1] == '(' ||
n[j - 1] == ')' ||
n[j - 1] == '{' ||
n[j - 1] == '}' ||
j == 0)
n[j] -= 32;

j++;
}
return (n);
}
