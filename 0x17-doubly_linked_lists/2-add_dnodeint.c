#include "lists.h"
/**
 * add_dnodeint - adds a node at start of double linked list
 * @head: list head
 * @n: the data
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_new;

	node_new = malloc(sizeof(dlistint_t));
	if (!node_new)
		return (NULL);

	node_new->n = n

	if (*head == NULL)
	{
		node_new->next = NULL;
		node_new->prev = NULL;
		*head = node_new;
		return (node_new);
	}
	node_new->next = *head;
	node_new->next->prev = node_new;
	node_new->prev = NULL;
	*head = node_new;
	return (node_new);
}

