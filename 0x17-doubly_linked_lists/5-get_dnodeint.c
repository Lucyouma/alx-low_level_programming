#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth element of node
 * @head: list head
 * @index: index
 * Return: Current node or Null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;
	dlistint_t *current;

	current = head;
	for (node = 0; current != NULL; node++)
	{
		if (node == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
