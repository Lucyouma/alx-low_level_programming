#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - new node addeded at the linked list beginning
 * @head: list_t list added double-pointer
 * @str: node new string
 *
 * Return: new element address, or if it fails NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
