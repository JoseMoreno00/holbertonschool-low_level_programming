#include "hash_tables.h"
/**
 * hash_table_create - Function that create a hash table
 * @size: Size of the array
 * Return: Return a pointer to the hash tables
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs;

	hs = malloc(sizeof(hash_table_t));

	if (hs == NULL)
	{
		free(hs);
		return (NULL);
	}

	hs->size = size;
	hs->array = malloc(sizeof(long int) * size);
	if (hs->array == NULL)
	{
		free(hs->array);
		return (NULL);
	}
	return (hs);
}
