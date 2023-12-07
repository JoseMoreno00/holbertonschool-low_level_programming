#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: h
 * Return: return the numbers of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;

	if (h == NULL)
		return (a);
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
