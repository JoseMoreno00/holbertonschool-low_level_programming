#include "lists.h"
#include <stdlib.h>
/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: struct
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
