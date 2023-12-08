#include "lists.h"

/**
 * free_list - free linked list from heap;
 * @head: first node
 * Return: None (just free 🕊️)
*/

void free_list(list_t *head)
{
	list_t *cur = head;

	while (cur != NULL)
	{
		free(cur);
		free(cur->str);
		cur = cur->next;
	}
	free(cur);
}
