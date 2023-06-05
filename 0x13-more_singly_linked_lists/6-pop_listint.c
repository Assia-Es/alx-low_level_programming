#include "lists.h"

/**
 * pop_listint - writes the character c to stdout
 * @head: The character to print
 *
 * Return: number
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || *head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
