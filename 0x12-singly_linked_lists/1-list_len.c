#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns linked list elements number
 * @h: list_t list pointer
 *
 * Return: h elements number
 */
size_t list_len(const list_t *h)
{
	size_t n;
	n= 0;

	while (h)
	{
	n++;
	h = h->next;
	}
	return (n);
}
