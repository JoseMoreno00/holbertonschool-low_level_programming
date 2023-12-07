#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table.
 * @ht: hash table to add element
 * @key: The key, string
 * @value: value to pair with key
 * Return: 1 seccess, 0 failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element, *tmp;
	unsigned long int index, size;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	tmp = ht->array[index];
	if (tmp && strcmp(tmp->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
		return (0);
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
