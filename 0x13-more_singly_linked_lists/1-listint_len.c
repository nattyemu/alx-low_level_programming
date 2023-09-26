#include "lists.h"

/**
 * listint_len - 1 print the int data in a singly linked list
 *
 * @h: the head pointer to the list
 * Return: The number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;
if (h == NULL)
return (0);

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
