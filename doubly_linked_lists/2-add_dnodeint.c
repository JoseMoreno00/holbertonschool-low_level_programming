#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint - Function that adds a new node at the beginning of a list
 * @head: head of the list
 * @n: n
 * Return: Return the adress of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
