#include "main.h"

/**
 * puts2 - writes the character c to stdout
 * @str: The character to print
 * return: half or input 
 */

void puts2(char *str)
{
int t = 0;
int l = 0;
char *y = str;
int o;
while (*y != '\0')
{
y++;
l++;
}
t = l - 1;
for (o = 0; o <= t; o++)
{
if (o % 2 == 0)
{
_putchar(str[o]);
}
}
_putchar('\n');
}
