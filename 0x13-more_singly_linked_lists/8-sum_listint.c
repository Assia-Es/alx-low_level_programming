#include "lists.h"

/**
 * sum_listint - writes the character c to stdout
 * @head: The character to print
 * Return: num
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
