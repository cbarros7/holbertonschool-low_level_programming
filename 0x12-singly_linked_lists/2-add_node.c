#include "lists.h"

/**
 * add_node - add new node a beginning of a a list
 * @head: pointer
 *@str:string
 * Return:  number elements of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	/*Using malloc*/
	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str); /*Assing data*/

	if (new_node->str == NULL)
		return (NULL);


	new_node->next = *head;
	new_node->len = (unsigned int)strlen(str);
	*head = new_node;

	return (new_node);
}
