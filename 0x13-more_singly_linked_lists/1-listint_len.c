#include "lists.h"

/**
 * listint_len - returns linked lists elements
 * @h: listint_t to traverse linked list
 *
 * Return: nodes num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
	num++;
	h = h->next;
	}

	return (num);
}
