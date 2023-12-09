#include "lists.h"
/**
 * dlistint_len - enumerates and returns no of elements in double linked list
 * @h: head of list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int els = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp)
	{
		temp = temp->next;
		els++;
	}
	return (els);
}
