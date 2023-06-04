#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - writes the character c to stdout
 * @str: The character to prin
 * Return: 0
 */
int check_num(char *str)
{
/*Declaring variable*/
unsigned int count;
count = 0;

while (count < strlen(str)) /*count string*/
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}

/**
 * main - writes the character c to stdout
 * @argc: The character to print
 * @argv: The character to print
 *
 * Return: On success 0.
 */
int main(int argc, char *argv[])
{
int count = 1, sum = 0;
int str_int;

while (count < argc)
{
if (check_num(argv[count]))
{
str_int = atoi(argv[count]);
sum += str_int;
}
else
{
printf("Error\n");
return (1);
}
count++;
}

printf("%d\n", sum);
return (0);
}
