#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns the nth node of a linked list
 * @head: First node of the list
 * @index: Number of the node solicited
 * Return: Return the nth node, if the node does exist return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodecount = 0;

	if (!head)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (nodecount == index)
		{
			break;
			return (head);
		}
		head = head->next;
		nodecount++;
	}
	return (head);
}
