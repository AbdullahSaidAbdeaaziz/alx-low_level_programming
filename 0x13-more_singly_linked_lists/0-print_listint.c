#include "lists.h"

/**
 * print_listint - print nodes in linked list
 * @h: head of first node
 * Return: no.of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *cur = h;

	if (!h)
	{
		return (nodes);
	}
	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		nodes++;
	}
	return (nodes);
}
