#include "main.h"

int check(char *s, int len, int i);
int _strlen_recursion(char *s);
/**
 * is_palindrome - check the code
 * @s: parametre
 * Return: fact
 */

int is_palindrome(char *s)
{

if (*s == 0)
return (1);
return (check(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - check the code
 * @s: parametre
 * Return: fact
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}
/**
 * check - check the code
 * @s: parametre
 * @len: par
 * @i: parametre
 * Return: fact
 */
int check(char *s, int len, int i)
{

if (*(s + 1) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check(s, i + 1, len - 1));
}
