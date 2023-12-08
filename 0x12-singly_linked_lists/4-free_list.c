#include "lists.h"

/**
 * free_list - free linked list from heap;
 * @head: first node
 * Return: None (just free 🕊️)
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}

}
