#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash tables
 * @ht: A hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *tmp;

	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a])
		{
			while (ht->array[a])
			{
				tmp = ht->array[a];

				free(tmp->key);
				free(tmp->value);
				free(tmp);
				ht->array[a] = ht->array[a]->next;
			}
		}

	}
	free(ht->array);
	free(ht);
}
