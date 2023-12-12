#include "lists.h"

/**
 * pop_listint - remove head in list
 * @head: first node
 * Return: element of node that has been
 * deleted
*/

int pop_listint(listint_t **head)
{
	int removed_element = 0;
	listint_t *cur;

	if (!*head)
	{
		return (removed_element);
	}

	cur = *head;
	removed_element = cur->n;
	*head = (*head)->next;
	free(cur);

	return (removed_element);
}
