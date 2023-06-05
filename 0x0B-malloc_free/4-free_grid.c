#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - writes the character c to stdout
 * @grid: The character to print
 * @height: The character to print
 * Description: create array
 * Return: On success .
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
