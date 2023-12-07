#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Function that insert a new node at a given
 * position
 * @h: h
 * @idx: Number of the position that the node has to be inserted
 * @n: Data of the node
 * Return: Return Adress of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *newNode, *tmp;

	tmp = *h;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
	{
		newNode->next = tmp;
		newNode->n = n;
		newNode->prev = NULL;
		if (tmp != NULL)
			tmp->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	while (count != idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		count++;
	}
	newNode->next = tmp->next;
	newNode->n = n;
	newNode->prev = tmp;
	tmp->next = newNode;
	if (newNode->next == NULL)
		return (newNode);
	tmp = tmp->next;
	tmp->prev = newNode;
	return (newNode);
}
