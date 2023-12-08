#include "lists.h"

/**
 * print_list - print all nodes in linked list
 * @h: first node in linked list
 * Return: number of nodes in linked list
*/
size_t print_list(const list_t *h)
{
	size_t no_node = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		no_node++;
		h = h->next;
	}
	return (no_node);
}
