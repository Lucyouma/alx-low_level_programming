#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: the list head
 * @index: the index of node to delete
 * Return: one or negative one for error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next;
	dlistint_t *temp;
	unsigned int n;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (-1);
	}
	for (n = 0; n < index - 1; n++)
	{
		if (!temp)
			return (0);
		temp = temp->next;
	}
	if (!temp || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	if (next)
		next->prev = temp;
	return (1);
}



