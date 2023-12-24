#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve a value from hash table
 * @ht: Hash table
 * @key: the element key
 * Return: null or retrieved value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current = NULL;
	char *value = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			value = strdup(current->value);
			if (!value)
				return (NULL);
			return (value);
		}
		current = current->next;
	}
	return (NULL);
}

