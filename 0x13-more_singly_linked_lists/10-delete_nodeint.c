#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node of the list at given index
 * @head: pointer to the beginning of the list
 * @index: the location at which the node will delete
 * Return: 1 if successful
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp;
listint_t *node;
tmp = *head;
if (head == NULL || *head == NULL)
return (-1);
for (i = 0; i < index - 1 && tmp != NULL && index != 0; i++)
tmp = tmp->next;
if (tmp == NULL)
return (-1);
if (index == 0)
{
node = tmp->next;
free(tmp);
*head = node;
}
else
{
if (tmp->next == NULL)
node = tmp->next;
else
node = tmp->next->next;
free(tmp->next);
tmp->next = node;
}
return (1);
}
