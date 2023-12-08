#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: firt node (head) in linked list
 * Return: number of element s in linked list
*/

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
