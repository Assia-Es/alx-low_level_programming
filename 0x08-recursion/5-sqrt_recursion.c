#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - check the code
 * @n: parametre
 * Return: fact
 */

int _sqrt_recursion(int n)
{

if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, -1));
}
/**
 * actual_sqrt_recursion - check the code
 * @n: parametre
 * @i: parametre
 * Return: fact
 */
int actual_sqrt_recursion(int n, int i)
{

if (i * i  > n)
return (-1);

if (i * i == 0)
return (i);

return (actual_sqrt_recursion(n, i + 1));
}
