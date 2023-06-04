#include "main.h"
#include <stdio.h>

/**
 * _isdigit -  for uppercase character..
 *
 * @c: number
 *
 * Return: 1 if c is uppercase,0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
