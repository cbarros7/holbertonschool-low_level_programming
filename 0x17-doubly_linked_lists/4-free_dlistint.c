#include "lists.h"

/**
 *  free_dlistint - free a dlistint_t list
 * @head: head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head->next;
		free(&head->n);
		head = temp;
	}

	free(head);
}
