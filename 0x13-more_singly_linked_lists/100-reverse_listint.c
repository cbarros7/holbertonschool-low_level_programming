#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	/* new_node traverses the list, head is reset to empty list.*/
	listint_t *new_node = *head, *next_node;
	*head = NULL;

	/* Until no more in list, insert current before first and advance*/
	while (new_node != NULL)
	{
		/*Changing the next node*/
		next_node = new_node->next;

		/*Insert at start of new list*/
		new_node->next = *head;
		*head = new_node;

		/*Advance to next*/
		new_node = next_node;
	}

	return (next_node);
}
