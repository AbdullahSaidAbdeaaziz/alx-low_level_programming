#include "lists.h"

/**
 * sum_listint - summing elements in list
 * @head: firt node in list;
 * Return: sum of list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (sum);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
