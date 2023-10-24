#include "lists.h"

/**
 * listint_len - returns the elements in a linked lists
 * @h: listint_t to traverse linked list
 *
 * Return: nodes num
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
{
	n++;
	h = h->next;
	}
	
	return (num);
}
