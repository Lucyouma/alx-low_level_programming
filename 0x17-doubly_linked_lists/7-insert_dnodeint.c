#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index of double link list
 * @h: list head
 * @idx: the index
 * @n: the node data to store
 * Return: address of new node or null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_new;
	dlistint_t *temp;
	unsigned int node = 0;

	node_new = malloc(sizeof(dlistint_t));

	if (!node_new)
		return (NULL);
	node_new->n = n;
	if (*h == NULL)
	{
		node_new->prev = NULL;
		node_new->next = NULL;
		*h = node_new;
		return (node_new);
	}
	if (idx == 0)
	{
		node_new->next = *h;
		node_new->prev = NULL;
		(*h)->prev = node_new;
		*h = node_new;
		return (node_new);
	}
	temp = *h;
	for (node = 0; node < idx - 1; node++)
	{
		temp = temp->next;
		if (!temp)
		{
			free(node_new);
			return (NULL);
		}
	}
	node_new->next = temp->next;
	temp->next->prev = node_new;
	temp->next = node_new;
	node_new->prev = temp;
	return (node_new);
}
