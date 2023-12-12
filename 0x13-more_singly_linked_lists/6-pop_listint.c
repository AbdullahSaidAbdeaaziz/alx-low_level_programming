#include "lists.h"

/**
 * pop_listint - remove head in list
 * @head: first node
 * Return: element of node that has been
 * deleted
*/

int pop_listint(listint_t **head)
{
	listint_t *cur;

	if (!*head)
	{
		return (0);
	}

	cur = *head;
	*head = (*head)->next;

	return (cur->n);
}
