#include "main.h"

int actual_prime_number(int n, int i);
/**
 * is_prime_number - check the code
 * @n: parametre
 * Return: fact
 */

int is_prime_number(int n)
{

if (n <= 0)
return (1);
return (actual_prime_number(n, n - 1));
}
/**
 * actual_prime_number - check the code
 * @n: parametre
 * @i: parametre
 * Return: fact
 */
int actual_prime_number(int n, int i)
{

if (i == 1)
return (1);

if (n % i  == 0 && i > 0)
return (0);

return (actual_prime_number(n, i - 1));
}
