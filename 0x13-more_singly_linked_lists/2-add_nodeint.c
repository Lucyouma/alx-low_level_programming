#include "lists.h"

/**
 * add_nodeint - adds a new node addition at linked list beginning
 * @head: first node pointer
 * @n: new node data insertion
 *
 * Return: new node pointer, or if it fails NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
