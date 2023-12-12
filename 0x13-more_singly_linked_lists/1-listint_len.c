#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: firt node (head) in linked list
 * Return: number of element s in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (!h)
	{
		return (elements);
	}
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
