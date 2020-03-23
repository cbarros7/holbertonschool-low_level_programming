#include "lists.h"
/**
 * free_listint2 -  free a list
 * @head: pointer
 * Return: void
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (current->next != NULL)
	{
		if (count == index)
			current->n;

		current = current->next;
		count++;
	}

	return (head);

}
