#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: parametre
 * Return: l
 */

int _strlen_recursion(char *s)
{
int l = 0;
if (*s)
{
l++;
l += _strlen_recursion(s + 1);
}
return (l);
}
