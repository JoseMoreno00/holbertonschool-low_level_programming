#include "lists.h"
/**
 * sum_dlistint - Function that summ all the data(n) of the nodes
 * @head: First node of the list
 * Return: Return the summ of the data nodes or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_nodes = 0;

	if (head)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head->next != NULL)
		{
			sum_nodes += head->n;
			head = head->next;
		}
		sum_nodes += head->n;
	}
	else
		return (0);
	return (sum_nodes);
}
