#include "lists.h"

/**
 * pop_listint - linked list deletes the head node
 * @head: first element in the linked list pointer
 *
 * Return: deleted data element,
 * or if the list is empty 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
