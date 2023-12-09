#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of double link list
 * @head: head of list
 * @n: node data to store
 * Return: Address of added node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *node_new;

	node_new = malloc(sizeof(dlistint_t));
	if (!node_new)
		return (NULL);

	node_new->n = n;

	if (*head == NULL)
	{
		node_new->next = NULL;
		node_new->prev = NULL;
		*head = node_new;
		return (node_new);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	node_new->n = n;
	temp->next = node_new;
	node_new->next = NULL;
	node_new->prev = temp;
	return (node_new);
}
