#include "main.h"

/**
 * rev_string - writes the character c to stdout
 * @s: The character to print
 */

void rev_string(char *s)
{

int t = 0;
int i;
char rev = s[0];
while (s[t] != '\0')
t++;
for (i = 0; i < t ; i++)
{
t--;
rev = s[i];
s[i] = s[t];
s[t] = rev;
}
}
