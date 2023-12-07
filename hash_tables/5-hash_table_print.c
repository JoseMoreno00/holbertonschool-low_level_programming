#include "hash_tables.h"
/**
 * hash_table_print - Function that print a hash table
 * @ht: A hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int a;
	int fe = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		if (ht->array[a])
		{
			tmp = ht->array[a];
			while (tmp)
			{
				if (fe == 0)
				{
					printf("'%s': '%s'", tmp->key, tmp->value);
					fe += 1;
				}
				else
				{
					printf(", '%s': '%s'", tmp->key, tmp->value);
				}
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
