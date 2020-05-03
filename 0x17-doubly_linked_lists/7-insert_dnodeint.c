#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head
 * @idx: index
 * @n: new data
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_data, *new_node = *h;
	unsigned int i = 0;

	new_data = malloc(sizeof(dlistint_t));

	/*Handle error allocated memory*/
	if (new_data == NULL)
		return (NULL);

	/*Assing data*/
	new_data->n = n;

	if (idx == 0)
	{
		new_data->next = *h;
		*h = new_data;
		return (*h);
	}
/*WHILE It determines how far it prints the positions*/
	while (i < (idx - 1))
	{
		new_node = new_node->next;

		/*not possible to add the new node at index*/
		if (new_node == NULL && (idx - i) > 0)
			return (NULL);

		i++;
	}

	/*Swap*/
	new_data->next = new_node->next;
	new_node->next = new_data;

	return (*h);
}
