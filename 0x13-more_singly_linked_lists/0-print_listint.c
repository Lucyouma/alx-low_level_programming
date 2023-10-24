#include "lists.h"

/**
 * print_listint - printing all elemts of linked list
 * @h: linked list listint_t type
 *
 * Return: node num
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	
	while (h)
	{
	printf("%d\n", h->n);
	n++;
	h = h->next;
	}
	
	return (n);
}
