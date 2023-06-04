#include "main.h"
/**
 *_isalpha - writen by assia
 *
 *@c: The character ASCII code
 *
 * Return: 1 if c is lowercase ,Returns 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
