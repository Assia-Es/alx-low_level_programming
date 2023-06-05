#include "lists.h"

/**
 * get_nodeint_at_index - writes the character c to stdout
 * @head: The character to print
 * @index: The character to print
 * Return: num
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}