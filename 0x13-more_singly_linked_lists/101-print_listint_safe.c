#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: Pointer to the head of the list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
		return 0;

	slow = fast = head;

	while (slow && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
			break;
	}

	if (slow != fast)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	else
	{
		slow = head;
		while (slow != fast->next)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;
			fast = fast->next;
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
		count++;
	}

	return count;
}
