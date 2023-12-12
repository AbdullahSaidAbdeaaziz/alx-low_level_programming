#include "lists.h"

/**
 * add_nodeint_end - adding node in end
 * @head: first node
 * @n: element in node
 * Return: address of node in end
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *cur;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	cur = *head;

	if (!cur)
	{
		*head = new_node;
		return (new_node);
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = new_node;

	return (new_node);
}
