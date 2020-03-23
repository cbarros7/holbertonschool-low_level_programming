#include "lists.h"
/**
 * sum_listint -  sum of all the data (n) of a listint_t linked list
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;

	unsigned int count = 0;

	if (head == NULL)
		return (0);

	while (current->next != NULL)
	{
		current = current->next;
		count += current->n;
	}

	return (count);
}
