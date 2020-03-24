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
	listint_t *new_node, *temp = *head;
	unsigned int i = 0;

	/*Using malloc for list new_node*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	/*Assign data*/
	new_node->n = n;
	new_node->next = NULL;

	/*if it is not possible to add the new node at index idx*/
	/*if (idx == 0)
	  return (NULL);
	 */



	/*WHILE It determines how far it prints the positions*/
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	/*Swap*/
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
