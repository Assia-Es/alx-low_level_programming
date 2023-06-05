#include "lists.h"

/**
 * free_listint - writes the character c to stdout
 * @head: The character to print
 * Return: number.
 */

void free_listint(listint_t *head)
{

listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}
