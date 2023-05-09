#include "main.h"

/**
 * *_strstr - writes the character c to stdout
 * @haystack: The character to print
 * @needle: The character to print
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;

while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
