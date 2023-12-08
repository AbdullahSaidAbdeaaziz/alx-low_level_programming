#include "lists.h"

/**
 * add_node - adding node linked list
 * @head: head of linked list
 * @str: value of node in linked list
 * Return: new_node that we created
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
