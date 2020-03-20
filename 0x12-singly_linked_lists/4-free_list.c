#include "lists.h"
/**
 * free_list -  free a list
 * @head: pointer
 * Return: void
 */

void free_list(list_t *head)
{
	while (head)
	{
		list_t *temp = head;
		head = head->next;
		free(temp);
	}
}
