#include "lists.h"

/**
 * 
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *pre;
	size_t i = 0;

	if (!head || !*head)
	{
		return (-1);
	}
	cur = *head;
	if (!index)
	{
		*head = (*head)->next;
		free(cur);
		return (1);
	}
	while (cur != NULL)
	{
		if (i == index - 1)
		{
			printf("[pre] %d\n", pre->n);
			printf("[post] %d\n", cur->n);
			pre->next = cur->next;
			free(cur);
			return (1);
		}
		i++;
		pre = cur;
		cur = cur->next;
	}
	return (-1);
}