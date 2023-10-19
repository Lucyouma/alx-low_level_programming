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
	size_t nodes = 0;

	while (h!= NULL)
	{
	if (h->str != NULL)
	printf("[%d] %s\n", 0, "(nil)");
	else
	printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	nodes++;
	}
	return (nodes);
}
