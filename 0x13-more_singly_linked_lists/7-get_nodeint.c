#include "lists.h"

/**
 * get_nodeint_at_index - get node in specific index
 * @head: first node in list
 * @index: index that will search for it
 * Return: node at that index, otherwise NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t index_counter = 0;

	while (head != NULL)
	{
		if (index == index_counter)
		{
			return (head);
		}
		head = head->next;
		index_counter++;
	}
	return (NULL);
}
