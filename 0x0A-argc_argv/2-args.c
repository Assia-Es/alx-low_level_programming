#include <stdio.h>
#include "main.h"

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
