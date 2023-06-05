#include "lists.h"

/**
 * reverse_listint - writes the character c to stdout
 * @head: The character to print
 * Return: num
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;
return (*head);
}
