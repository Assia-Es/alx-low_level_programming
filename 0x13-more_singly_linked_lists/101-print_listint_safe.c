#include "lists.h"
#include <stdio.h>

size_t loop(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * loop - writes the character stdout
 * @head: The character to print
 * Return: num
 */
size_t loop(const listint_t *head)
{
const listint_t *t, *h;
size_t n = 1;
if (head == NULL || head->next == NULL)
return (0);
t = head->next;
h = (head->next)->next;

while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
n++;
t = t->next;
}
return (n);
}
t = t->next;
h = (h->next)->next;
}
return (0);
}

/**
 * print_listint_safe - writes the character c to stdout
 * @head: The character to print
 * Return: num
 */

size_t print_listint_safe(const listint_t *head)
{
size_t n, i = 0;
n = loop(head);
if (n == 0)
{
for (; head != NULL; n++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (i = 0; i < n; i++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("->[%p] %d\n", (void *)head, head->n);
}

return (n);
}
