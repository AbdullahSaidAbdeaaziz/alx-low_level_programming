#include "lists.h"

/**
 * add_node_end - adding node in end (tail) of linked list
 * @head: first node in linked list
 * @str: value of string in node
 * Return: last node in linked list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;

	last_node = malloc(sizeof(list_t));
	if (!last_node)
	{
		return (NULL);
	}
	last_node->str = strdup(str);
	last_node->len = strlen(str);
	last_node->next = NULL;

	if (!*head)
		*head = last_node;
	else
	{
		list_t *cur = *head;

		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = last_node;
	}
	return (last_node);
}
