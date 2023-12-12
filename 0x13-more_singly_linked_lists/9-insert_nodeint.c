#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in
 * specific position on list
 * @head: first node
 * @idx: index of position will insert on
 * @n: value of node
 * Return: node that we insert it, otherwise
 * NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *cur;
	size_t counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !*head)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	cur = *head;
	while (cur != NULL && counter < idx)
	{
		if (idx - 1 == counter)
		{
			new_node->next = cur->next;
			cur->next = new_node;
			return (new_node);
		}
		cur = cur->next;
		counter++;
	}

	free(new_node);
	return (NULL);
}
