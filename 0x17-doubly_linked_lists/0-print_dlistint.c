#include "lists.h"
/**
 * print_dlistint - outputs element of double linked list
 * @h: Head pointer
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int pos = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		pos++;
	}
	return (pos);
}

