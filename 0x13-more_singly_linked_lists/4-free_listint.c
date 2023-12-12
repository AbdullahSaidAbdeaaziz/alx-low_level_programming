#include "lists.h"

/**
 * free_listint - free list from heap
 * @head: first node in list
 * Return: None
*/

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head;
		head = head->next;
		free(temp);
	}
}
