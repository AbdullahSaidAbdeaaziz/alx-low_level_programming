#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at
 * position
 * @head: first node in list if exist
 * @index: index of deleted node
 * Return: 1 on success and -1 on fail of delete
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
		if (i == index)
		{
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