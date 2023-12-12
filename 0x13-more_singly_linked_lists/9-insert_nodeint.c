#include "lists.h"


/**
 * size_listint - size of list
 * @head: first node
 * Return: size of list
*/

size_t size_listint(listint_t **head)
{
	size_t size = 0;
	listint_t *cur = *head;

	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return (size);
}

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
	listint_t *new_node, *post, *pre;
	size_t counter = 0, size = size_listint(head);

	new_node = malloc(sizeof(listint_t));
	if (!new_node || idx > size)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	pre = *head;
	post = (*head)->next;
	while (pre != NULL)
	{
		if (idx - 1 == counter)
		{
			pre->next = new_node;
			new_node->next = post;
			break;
		}
		post = post->next;
		pre = pre->next;
		counter++;
	}
	return (new_node);
}
