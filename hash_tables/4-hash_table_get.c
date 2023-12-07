#include "hash_tables.h"
/**
 * hash_table_get - Function that retrieves a value associated with a key.
 * @ht: Hash table
 * @key: The key
 * Return: return the value associated with te element or NULL if key couldn't
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp == NULL)
		return (NULL);
	while (strcmp(key, tmp->key) != 0)
		tmp = tmp->next;
	return (tmp->value);
}
