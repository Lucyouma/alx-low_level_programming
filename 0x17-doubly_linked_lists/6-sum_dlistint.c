#include "lists.h"
/**
 * sum_dlistint - sums elements of double linked list
 * @head: fisrt position in list
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
