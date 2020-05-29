#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table you want to look into
 * @key: key string
 * Return: value associated with the element, or
 * NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL || *key == 0)
		return (NULL);

	index = hash_djb2((const unsigned char *) key);
	index %= ht->size;
	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			break;
	}

	if (ptr == NULL)
		return (NULL);

	return (strdup(ptr->value));
}
