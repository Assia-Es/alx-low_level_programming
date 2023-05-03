#include "main.h"

/**
 * swap_int- writes the character c to stdout
 * @a: The character to print
 * @b: The character to print
 */

void swap_int(int *a, int *b)
{
int t;
t = *a;
*a = *b;
*b = t;
}
