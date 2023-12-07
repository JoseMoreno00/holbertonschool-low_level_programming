#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Function that frees a dlistint_t list.
 * @head: First node of the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->prev != NULL)
		{
			head = head->prev;
		}
	}
	else
		return;
	free(head);
	while (head->next != NULL)
	{
		head = head->next;
		free(head);
	}
}
