#include "hash_tables.h"
/**
 * hash_table_get - retieve value associated with key
 * @key: key
 * @ht: hash table
 * Return: value assss
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (strcmp(node->key, key) && node != NULL)
	{
		node = node->next;
	}
	if (node == NULL)
		return (NULL);

	value = node->value;
	return (value);
}
