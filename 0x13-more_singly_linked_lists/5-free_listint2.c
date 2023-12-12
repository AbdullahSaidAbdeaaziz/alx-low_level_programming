#include "lists.h"

/**
 * free_listint2 - free list after that
 * set head to NULL
 * @head: first node
 * Return: None
*/

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
