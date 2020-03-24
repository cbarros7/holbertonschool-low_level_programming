#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx : ist where the new node should be added
 * @n : data of the list
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*Declaring variables and lists*/
	listint_t *new_node, *temp = *head, *temp2;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	/*Using malloc for list new_node*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	/*Assign data*/
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
		*head = new_node;

	/*WHILE It determines how far it prints the positions*/
	while (i < (idx - 1) && new_node != NULL && idx != 0)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	if (idx == 0)
		new_node->next = temp;

	/*Swap*/
	else
	{
		temp2 = temp->next;
		temp->next = new_node;
		new_node->next = temp2;
	}

	return (new_node);
}
