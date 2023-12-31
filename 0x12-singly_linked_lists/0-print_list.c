#include <stdio.h>
#include "lists.h"

/**
 * print_list - All linked list elements to be printed
 * @h: list_t list pointer to print
 *
 * Return: Printed nodes number
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	h = h->next;
	n++;
	}
	return (n);
}
