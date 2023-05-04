#include "main.h"

/**
 * puts_half - writes the character c to stdout
 * @str: The character to print
 */

void puts_half(char *str)
{

int leng = 0;
int n, i;

while (str[leng] != '\0')
{
leng++;
}

if (leng % 2 == 0)
n = leng / 2;
else
n = (leng - 1) / 2;

for (i = n; i <= leng; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
