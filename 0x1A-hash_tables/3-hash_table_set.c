#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table for to add or update the key/value
 * @key: key string
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *ptr;
	char *new_value;
	if (key == NULL || value == NULL)
		return (0);
	/* Gives you the index of a key*/
	index = key_index((const unsigned char *) key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		/*Compare values*/
		if (strcmp(ptr->key, key) == 0)
			break;
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		/*Handle errors*/
		if (new_node == NULL)
			return (0);

		new_node->key = strdup(key); /*Copy key*/
		if (new_node->key == NULL)
			return (0);
		new_node->value = strdup(value); /*Copy value*/
		if (new_node->value == NULL)
			return (0);
	}

	else
	{
		/*Copy value*/
		new_value = strdup(value);
		if (new_value == NULL)
			return (0);
		ptr->value = new_value;
	}
	return (1);
}
