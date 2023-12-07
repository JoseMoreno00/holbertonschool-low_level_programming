#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Function that deletes the node at index of a
 * linked list
 * @head: First node of the list
 * @index: Number of the position that the node has to be inserted
 * Return: Return 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 1;
	dlistint_t *tmp, *node;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		node = *head;
		*head = tmp->next;
		tmp = tmp->next;
			if (tmp != NULL)
				tmp->prev = NULL;
		free(node);
		return (1);
	}
	while (count != index)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	if (tmp->next->next != NULL)
	{
		node = tmp->next->next;
		free(tmp->next);
		tmp->next = node;
		node->prev = tmp;
		return (1);
	}
	else
	{
		free(tmp->next);
		tmp->next = NULL;
		return (1);
	}
}
