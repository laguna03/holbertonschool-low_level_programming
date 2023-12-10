#include "hash_tables.h"

/**
 * hash_table_get - function
 * @ht: hash table to look
 * @key: key to look
 * Return: value associated with element, or NULL if not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)

{
unsigned long int index;
hash_node_t *tmp;

if (!ht || !key)
return (0);

index = key_index((unsigned char *)key, ht->size);
tmp = ht->array[index];
while (tmp)
{
if (strcmp(tmp->key, key) == 0)
return (tmp->value);
tmp = tmp->next;
}
return (NULL);
}
