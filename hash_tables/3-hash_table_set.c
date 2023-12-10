#include "hash_tables.h"
/**
* hash_table_set - adds an element to a hash table
* @ht: the table you want to add to
* @key: the key
* @value: the value
* Return: 1 on success, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)

{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_table_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
